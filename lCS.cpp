#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <char> v;
    string a,b;
    cout<<"Enter 1st String :"<<endl;
    cin>>a;
    cout<<"Enter 2nd string:"<<endl;
    cin>>b;
    int la = a.length() +1;
	int lb = b.length() +1;
	int s[la][lb];
	for(int i=0;i<la;i++)
    {
        s[i][0]=0;
    }
    for(int i=0;i<lb;i++)
    {
        s[0][i]=0;
    }
    for(int i=1;i<la;i++)
    {
        for(int j=1;j<lb;j++)
        {
            if(a[i-1]!=b[j-1])
            {
                s[i][j]=max(s[i-1][j],s[i][j-1]);
            }
            else
            {
                s[i][j]=s[i-1][j-1]+1;
            }
        }
    }
    cout<<"minimum length of lcs ="<<s[la-1][lb-1]<<endl;
    int x,y;
    x=la-1;
    y=lb-1;
    while(s[x][y]>0)
    {
        if(s[x][y]==s[x][y-1])
        {
            y--;
        }
        else if(s[x][y]==s[x-1][y])
        {
            x--;
        }
        else
        {
            x--;
            y--;
            v.push_back(a[x]);
        }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}