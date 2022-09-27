#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
	int a,b;
	cout<< " enter the first number :";
	cin>>a;
	cout<< " enter the second number :";
	cin>>b;
	cout<<" \n before swapping the values "<<a<<"\t"<<b;
	swap(a,b);
	cout<<"\n outside function after swapping "<<a<<"\t"<<b;
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<< " \n inside the function after swapping "<<a<<"\t"<<b;
}
