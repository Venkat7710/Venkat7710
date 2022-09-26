#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str;
	cout<<"enter a string";
	cin>>str;
	int i,j,n=str.size(),c=0;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			c=0;
			break;
		}
		else
		{
			c=1;
		}
	}
	if(c)
    cout<<"string is a palindrome";
	else
    cout<<"string is not a palindrome";
	return 0;
}
		
	

