#include<bits/stdc++.h>
using namespace std;
float w[20],p[20],pw[20],m;
int i,j,n;
void max_profit();
void min_weight();
void max_profit_weight(); 
void swapper(int,int);
float knapsack(float[],float[],int,float);
int main()
{
    cout<<"Enter Size and no. of objects:";
    cin>>m>>n;
    cout<<"Enter profits and weights"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>p[i];
        cin>>w[i];
        pw[i]=p[i]/w[i];
    }
    cout<<"Max profits:"<<endl;
    max_profit();
    cout<<"Minimum Weights:"<<endl;
    min_weight();
    cout<<"Max profit per unit weight:"<<endl;
    max_profit_weight();
    return 0;
}
void max_profit()
{
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]<p[j])
                swapper(i,j);
        }
    }
    cout<<"Total Profit = "<<knapsack(p,w,n,m)<<endl;
}
void min_weight()
{
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(w[i]>w[j])
                swapper(i,j);
        }
    }
    cout<<"Total Profit = "<<knapsack(p,w,n,m)<<endl;
}
void max_profit_weight()
{
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(pw[i]<pw[j])
                swapper(i,j);
        }
    }
    cout<<"Total Profit = "<<knapsack(p,w,n,m)<<endl;
}
float knapsack(float p[],float w[],int n,float m)
{
    float tprofit=0.0f,t=0.0f;
    while(m>0)
    {
        for(i=0;i<n;i++)
        {
            if(w[i]<=m)
            {
                tprofit+=p[i];
                m-=w[i];
            }
            else
                break;
        }
        t=m/w[i];
        tprofit+=(t*p[i]);
        break;
    }
    return tprofit;
}
void swapper(int i, int j)
{
    swap(p[i],p[j]);
    swap(pw[i],pw[j]);
    swap(w[i],w[j]);
}