#include<iostream>
#define MAX 100
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void selectionSort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int minIndex=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[minIndex])
				minIndex=j;
		}
		swap(&a[i],&a[minIndex]);
	}
}

int main()
{
	int arr[MAX],n;
	
	cout<<"Enter the number of elements: ";
	cin>>n;
	
	cout<<"Enter the elements of array to be sorted:"<<endl;
	for(int i=0;i<n;i++)
		cin>>arr[i];
		
	selectionSort(arr,n);
	
	cout<<"Sorted Elements of Array are:"<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"	";
	
	return 0;
}
