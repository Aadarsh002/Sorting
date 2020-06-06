#include<iostream>
#define MAX 100
using namespace std;

class countingSort
{
	private:
		int noOfElement;
		int arr[MAX];
		int elementPosition[MAX];
		int sortedElement[MAX];
	public:
		void getarray()
		{
			int i;
			
			cout<<"Enter the number of element:"<<endl;
			cin>>noOfElement;
			
			cout<<"Enter the elements:"<<endl;
			for(i=0;i<noOfElement;i++)
				cin>>arr[i];
		}
		
		countingSort()
		{
			int i;
			for(i=0;i<noOfElement;i++)
				elementPosition[i]=0;
		}
		
		void calPosition()
		{
			getarray();
			
			int i,j;
			for(i=0;i<noOfElement;i++)
			{
				for(j=i+1;j<noOfElement;j++)
				{
					if(arr[i]>arr[j])
						elementPosition[i]++;
					else
						elementPosition[j]++;
				}
			}
		}
		
		
		void placeElementSorted()
		{
			calPosition();
			
				
			for(int i=0;i<noOfElement;i++)
			{
				sortedElement[elementPosition[i]]=arr[i];
			}
		}
		
		void printSortedElement()
		{
			placeElementSorted();
			
			cout<<"Sorted Elements are:"<<endl;
			for(int i=0;i<noOfElement;i++)
			{
				cout<<sortedElement[i]<<"	";
			}
			cout<<endl;
		}
};

int main()
{
	countingSort s1;
	s1.printSortedElement();
	return 0;
}
