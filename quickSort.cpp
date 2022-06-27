#include<iostream>
void quickSort(int[],int,int);
int partition(int[],int,int);
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter No.of Elements:";
	cin>>n;
	int a[n];
	cout<<"Enter Elements of the Array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quickSort(a,0,n);
	return 0;
}
void quickSort(int a[],int low,int high)
{
	if(low<high)
	{
		int j=partition(a,low,high);
		quickSort(a,low,j);
		quickSort(a,j+1,high);
		for(int i=0;i<high;i++)
		{
			cout<<a[i]<<" ";
		}
	}
}
int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low;
	int j=high;
	while(i<j)
	{
		do
		{
			i++;
		}while(a[i]<=pivot&&i<high);
		do
		{
			j--;
		}while(a[i]>pivot);
	}
	std::swap(a[low],a[j]);
	return j;
}
