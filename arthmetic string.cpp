#include<iostream>
using namespace std;
int main()  
{
	int a=2,b=3,c,choice;
	cout<<"provide any choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			c=a+b;
			cout<<"add="<<c;
			break;
			case 2:
				c=a-b;
				cout<<"sub="<<c;
				break;
				case 3:
					c=a*b;
					cout<<"mul="<<c;
					break;
					case 4:
						c=a/b;
						cout<<"div="<<c;
						break;
						case 5:
							c=a%b;
							cout<<"module="<<c;
							break;
	}
	return 0;
}                                                                                                                                                                                                                                
