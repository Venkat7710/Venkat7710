#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,total;
	float per;
	cout<<" enter the marks A:";
	cin>>a;
	cout<<" enter the marks B:";
	cin>>b;
	cout<<" enter the marks C:";
	cin>>c;
	cout<< " enter the marks D:";
	cin>>d;
	total=(a+b+c+d);
	per=total/4;
	if (per>=92)
	  cout<<"\n A grade"<<endl;
	 else if(per>=80 && per<=91 )
	  cout<<" \n B grade"<<endl;
	 else if(per>=70 && per<=79)
	  cout<<"\n c grade"<<endl;
	 else if(per>=55 && per<=69)
	  cout<<" \n D grade"<<endl;
	else
	  cout<<"\n fail"<<endl;
   return 0;
}
