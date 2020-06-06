#include<iostream>
#define MAX 100
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void bubbleSort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
				swap(&a[j],&a[j+1]);
		}
	}
}

int main()
{
	int arr[MAX],n,i;
	
	cout<<"Enter the number of Elements: ";
	cin>>n;
	
	cout<<"Enter the elements to be sorted:"<<endl;
	for(i=0;i<n;i++)
		cin>>arr[i];
		
	bubbleSort(arr,n);
	
	cout<<"Sorted elements of array is:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"	";
	return 0;
}
