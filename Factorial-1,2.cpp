#include<iostream>
//int fact_rec(int);
//int fact(int);
//using namespace std;
//int main()
//{
//	int op,n,f;
//	cout<<"Factorial in 2 Methods:"<<endl<<"1.Recurssion,\t2.Normal"<<endl<<"Choose Your Option:";
//	cin>>op;
//	switch(op)
//	{
//		case 1:
//			cout<<"Enter Number:"<<endl;
//			cin>>n;
//			f=fact_rec(n);
//			break;
//		case 2:
//			cout<<"Enter Number:"<<endl;
//			cin>>n;
//			f=fact(n);
//			break;
//		default:
//			cout<<"WRONG OPTION!!!"<<endl;
//			system("cls");
//			main();
//	}
//	cout<<"Factorial of"<<"\t"<<n<<"\t"<<f<<endl;
//	return 0;
//}
//int fact_rec(int n)
//{
//	if(n==1||n==0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*fact_rec(n-1);
//	}
//}
//int fact(int n)
//{
//	int i,f=1;
//	for(i=1;i<=n;i++)
//	{
//		f=f*i;
//	}
//	return f;
//}
int main()
{
    int n=5,i,j,sum=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            sum=sum+j;
        }
    }
    std::cout<<sum;
}
