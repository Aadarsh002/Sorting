#include<iostream>
#define MAX 100

using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int *a,int low,int high)
{
	int pivot=a[high],j;
	int i=low-1;//smaller element index
	for(j=low;j<=high-1;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[j]);
	return i+1;
}

void quickSort(int *a,int low,int high)
{
	if(low<high)
	{
		int p=partition(a,low,high);
		quickSort(a,low,p-1);
		quickSort(a,p+1,high);
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
	
	quickSort(arr,0,n-1);
	
	cout<<"Sorted Elements of Array are:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"	";
	return 0;
}
