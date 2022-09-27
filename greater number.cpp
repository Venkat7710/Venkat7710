#include <iostream>
int main()
{
	int a=3,b=2,c=0;
	if(a>b && a>c){
		std::cout<<"a is greater";
	}

	else if(b>a && b>c){
		std::cout<<"b is greater";
	}
	else 
	{
		std::cout<<"c is greater";
	}

}
