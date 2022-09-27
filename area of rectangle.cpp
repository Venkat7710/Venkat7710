#include<iostream>
using namespace std;
class shape
{
	char sh[20];
	public:
		void dg()
		{
			cout<<"enter the shape:"<<endl;
			cin>>sh;
		}
};
class rectangle
{
	public:
	int l,b;
	void area()
	{
		cout<<"the length is:"<<endl;
		cin>>l;
		cout<<"the breadth is:"<<endl;
		cin>>b;
		cout<<"the area of rectangle is:"<<l*b;
	}
};
class cuboid:public shape, public rectangle
{
	int h;
	public:
		void cub()
		{
			cout<<"enter the height:";
			cin>>h;
			cout<<"the area of cuboid is:"<<l*b*h;
				
		}
};
int main()
{
	cuboid k;
	k.area();
	k.cub();
	k.dg();
	return 0;
}
