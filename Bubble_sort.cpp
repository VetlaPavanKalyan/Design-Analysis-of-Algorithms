#include<iostream>
using namespace std;
int main()
{
	int i,j,n,temp;
	cout<<"Enter size of the array:";
	cin>>n;
	int a[n];
	cout<<"Enter the array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	system("cls");
	cout<<"Sorted Array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
