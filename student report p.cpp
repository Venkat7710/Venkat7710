#include<iostream>
using namespace std;
class student
{
	int  m1,m2,m3,total,avg;
	char name[100],reg[12];
	public:
	void getdata();
	void calculate();
	void display();
};
void student::getdata()
{
	cout<<"enter the name:";
	cin>>name;
	cout<<"enter the register number:";
	cin>>reg;
	cout<<"enter the m1:";
	cin>>m1;
	cout<<"enter the m2:";
	cin>>m2;
	cout<<"enter the m3:";
	cin>>m3;
}
void student::calculate()
{
	total=m1+m2+m3;
	if( m1<50 && m2<50 && m3<50);
	avg=total/3;
}
 void student::display()
{
	cout<<"\nname:"<<name;
	cout<<"\nreg:"<<reg;
	cout<<"\nm1:"<<m1;
	cout<<"\nm2:"<<m2;
	cout<<"\nm3:"<<m3;
	cout<<"\ntotal:"<<total;
	cout<<"\naverage:"<<avg;
}
int main()
{
	student a;
	a.getdata();
	a.calculate();
	a.display();
	return 0;
	
}

