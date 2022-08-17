#include<bits/stdc++.h>
using namespace std;
void solve(int[],int);
bool check_soln(int[][],int,int);
int i,j;
int main()
{
    int n;
    cout<<"Enter either 4 or 8:";
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
    solve(a,n);
}
void solve(int a[][],int n)
{
    t=0;
    while(t<n)
    {
        boot x=check_soln(a,n,t);
        if(x==true)
        {
            a[t][]
        }
    }
}
bool check_soln(int a[][],int n,int t)
{
    for(i=0;i<n;i++)
    {
        int c=0;
        if (a[t][i]=1 && i!=t) c++;
        if (a[i][t]=1 && i!=t) c++;
        if (a[i+1][i+1]==1) c++;
        if (a[i-1][i-1]==1) c++;
    }
    if (c>0)
    {
        return false;
    }
    else
    {
        return true;
    }
}
