#include<bits/stdc++.h>
using namespace std;
void quickSort(int[],int,int);
int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quickSort(arr,0,n-1);
	cout<<"Sorted array is"<<endl;
	for(int x:arr)
	{
		cout<<x<<" ";
	}
	return 0;
}
void quickSort(int arr[],int low,int high)
{
	if(low<high)
	{
		int i,pivot,j;
		i=low;
		pivot=low;
		j=high;
		while(i<j)
		{
			while(arr[pivot]>=arr[i] && i<high)
				i++;
			while(arr[pivot]<arr[j])
				j--;
			if(i<j)
				swap(arr[i],arr[j]);
		}
		swap(arr[pivot],arr[j]);
		quickSort(arr,low,j-1);
		quickSort(arr,j+1,high);
	}
}