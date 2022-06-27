#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int minimum(int a, int b, int c)
{
	int x=min(a,b);
	return min(x,c);
}
int main()
{
	string a,b;
	int la,lb,i,j;
	cout<<"Enter String 1:";
	cin>>a;
	cout<<"Enter String 2:";
	cin>>b;
	la=a.size()+1;
	lb=b.length()+1;
	int s[lb][la];
	for(i=0;i<la;i++)
		s[0][i]=i;
	for(i=0;i<lb;i++)
		s[i][0]=i;
	for(i=1;i<lb;i++)
	{
		for(j=1;j<la;j++)
		{
			if(b[i-1]==a[j-1])
			{
				s[i][j]=s[i-1][j-1];
			}
			else
			{
				s[i][j]=minimum(s[i-1][j-1],s[i][j-1],s[i-1][j])+1;
			}
		}
	}
	cout<<"Minimum no. of edits needed = "<<s[lb-1][la-1];
	return 0;
}
