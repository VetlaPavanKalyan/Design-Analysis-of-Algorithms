#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,min_cost=0,no_e=1,m,a,b;
    cout<<"Enter no. of nodes:";
    cin>>n;
    int cost[n+1][n+1],visited[n+1]={0};
    cout<<"Enter cost adjacency matrix:"<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>cost[i][j];
            if(cost[i][j]==0)
            {
                cost[i][j]=INT_MAX;
            }
        }
    }
    visited[1]=1;
    while(no_e<n)
    {
        m=INT_MAX;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<m)
                {
                    m=cost[i][j];
                    a=i;
                    b=j;
                }
            }
        }
        if(!visited[b])
        {
            cout<<a<<" -> "<<b<<", cost = "<<m<<endl;
            min_cost+=m;
            no_e++;
        }
        visited[b]=1;
        cost[a][b]=INT_MAX;
        cost[b][a]=INT_MAX;
    }
    cout<<"Minimum Cost = "<<min_cost<<endl;
    return 0;
}