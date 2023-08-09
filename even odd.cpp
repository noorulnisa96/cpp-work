#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a positive number= ";
	cin>>n;
	

	if(n%2==0&&n<0)
	{
		cout<<"Number is even and negative."<<endl;
	}
	else if(n%2==0&&n>0)
	{
		cout<<"Number is even and positive.";
	}
	else
	{
		cout<<"Number is odd";
	}

}
