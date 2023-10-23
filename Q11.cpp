/*                                        ||Q.11||
*  Write a program in C++ that finds largest of three numbers.
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<" Enter the num a=";
	cin>>a;
	cout<<" Enter the num b=";
	cin>>b;
	cout<<" Enter the num c=";
	cin>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"largest number="<<a;
		}
		else
		{
			cout<<"largest number="<<c;
		}
	}
	else
	if(b>c)
	{
		cout<<"largest number="<<b;
	}
	else
	{
		cout<<"largest number="<<c;
	}
}
