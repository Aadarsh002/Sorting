#include<iostream>
#define MAX 100

using namespace std;

void insertionSort(int *a,int n)
{
	for(int i=1;i<n;i++)
	{
		int currentElement=a[i];
		//for sorted part
		int j=i-1;
		while(j>=0 && a[j]>currentElement)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=currentElement;
	}
}

int main()
{
	int arr[MAX],n,i;
	
	cout<<"Enter the number of elements: ";
	cin>>n;
	
	cout<<"Enter the elements to be sorted:"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
		
	insertionSort(arr,n);
	
	cout<<"Sorted Elements are:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"	";
	return 0;
}
