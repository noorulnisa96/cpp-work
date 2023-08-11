#include<iostream>
using namespace std;
int main()
{
	double a,b,c,d,e,sum,mul,divid,sub,n,final,j,k;
	
	
	cout<<"Enter any Five numbers and then press enter.\n(value should not contain point and should be <500)"<<endl;
	cin>>a>>b>>c>>d>>e;
	

	
	cout<<endl;
	cout<<"What do you want to do?"<<endl;
	cout<<endl;
	cout<<"\tPRESS\n 0 for subtraction\n 1 for multiply\n 2 for addition\n 3 for divide"<<endl;
	cin>>n;
	
	sum=a+b+c+d+e;
	sub=a-b-c-d-e;
	mul=a*b*c*d*e;
	divid=a/b;
	final=divid/c;
	j=final/d;
	k=j/e;


if(n==0 || n==1 || n==2 || n==3 )	
{
	

	if(n==0)
	{
		cout<<"Answer is:"<<sub<<endl;
	}
	if(n==1)
	{
		cout<<"Answer is:"<<mul<<endl;
	}
	if(n==3)
	{
		cout<<"Answer is:"<<divid<<endl;
	}
	if(n==2)
	{
		cout<<"Answer is:"<<sum<<endl;
	}
		int z;
	
	cout<<"Do you want to check percentage?\nPRESS \n 0 for No\n 1 for Yes"<<endl;
	cin>>z;
	if(z==1)
	{
		double T,percentage,s;
		cout<<"Enter Total Marks: "<<endl;
		cin>>T;
		s=sum*100;
		percentage=s/T;
		cout<<"You have "<<percentage<<"%.";
	}
	

	
}
	else
	{
		cout<<"INVALID, Please rerun your program..."<<endl;
	
	}
}
