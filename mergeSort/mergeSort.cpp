#include<iostream>
#include<cstdlib>
#define MAX 100
using namespace std;

void merge(int a[],int low,int mid,int high)
{
	int i=low;
	int j=mid+1;
	int temp[MAX];
	int k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
			temp[k]=a[i++];
		else
			temp[k]=a[j++];
		k++;
	}
	while(i<=mid)
	{
		temp[k]=a[i++];
		k++;
	}
		
	while(j<=high)
	{
		temp[k]=a[j++];
		k++;
	}
		
	for(i=low;i<k;i++)
		a[i]=temp[i];
}

void mergeSort(int arr[],int l,int h)
{
	if(l<h)
	{
		int mid=(l+h)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,h);
		merge(arr,l,mid,h);	
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
	
	mergeSort(arr,0,n-1);
	
	cout<<"Sorted elements are:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"	";
		
		
	return 0;
}
