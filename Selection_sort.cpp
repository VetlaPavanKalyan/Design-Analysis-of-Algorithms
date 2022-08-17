#include<iostream>
using namespace std;
int main()
{
	int i,j,n,min,temp;
	cout<<"Enter size of the Array:";
	cin>>n;
	int a[n];
	cout<<"Enter the Array:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		swap(a[i],a[min]);
	}
	system("cls");
	cout<<"Sorted Array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
