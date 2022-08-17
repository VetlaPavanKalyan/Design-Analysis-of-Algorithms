#include<iostream>
using namespace std;
int gcd(int, int);
int main()
{
	int g,a,b;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	g=gcd(a,b);
	cout<<"GCD of "<<a<<" "<<b<<" = "<<g;
	return 0;
}
int gcd(int a, int b)
{
	int rem;
	if(a>0)
	{
		if(a<b)
		{
			rem=b%a;
			return gcd(rem,a);
		}
		else
		{
			rem=a%b;
			return gcd(rem,b);
		}
	}
	return b;
}
