#include<iostream>
using namespace std;
class printnumber
{
	int m1;
	char*a;
	float m2;
	double m3;
	long int m4;
	public:
		printnumber(int);
		printnumber(char*);
		printnumber(float);
		printnumber(double);
		printnumber(long int);
};
printnumber::printnumber(int x)
{
	m1=x;
	cout<<"integer:"<<m1;
}
printnumber::printnumber(char*y)
{
	a=y;
	cout<<"char is:"<<a;
}
printnumber::printnumber(float s)
{
	m2=s;
	cout<<"float:"<<m2;
}
printnumber::printnumber(double e)
{
	m3=e;
	cout<<"double:"<<m3;
}
printnumber::printnumber(long int b)
{
	m4=b;
	cout<<"long int:"<<m4;
}
int main()
{
	printnumber d1(50),d2("hwerd!"),d3(8.8),d4(123465669.78),d5(76547837);
	return 0;
}
