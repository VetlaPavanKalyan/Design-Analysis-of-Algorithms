#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,t;
    float r;
    cout<<"Enter the size of the Sack:";
    cin>>m;
    cout<<"Enter number of elements:";
    cin>>n;
    int p[n],w[n],pw[n];
    cout<<"Enter Profits:"<<endl;
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    cout<<"Enter weights:"<<endl;
    for(i=0;i<n;i++){
        cin>>w[i];
    }
    for(i=0;i<n;i++){
        pw[i]=(p[i]/w[i]);
    }
    sort(pw,pw+n,greater<int>());
    r=0;
    for(i=0;i<n;i++){
        if(m-w[i]>=0){
            r=r+p[i];
            cout<<p[i]<<" "<<1<<endl;
            m=m-w[i];
        }
        else{

            r=r+p[i]/m+p[i]%m;
        }
    }
    cout<<r<<endl;
}
