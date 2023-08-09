#include<iostream>
using namespace std;
int main()
{
	double A,B,C,D,E,F,G,H,percent,total,obtained,p;
	cout<<"Enter your all subj Marks:"<<endl;
	cin>>A>>B>>C>>D>>E>>F>>G>>H;
	
	obtained=A+B+C+D+E+F+G+H;
	cout<<"Enter Total Marks:";
	cin>>total;
	
	cout<<"You obtained "<<obtained<<" marks."<<endl;
	
	p=obtained*100;
	percent=p/total;
	 cout<<"You have "<<percent<<"%."<<endl;
	 
	
}
