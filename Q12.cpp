/*                                        ||Q.12||
*   Write a program in C++ to find out the power of a number.
*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,t=1,i;
	cout<<"Enter the a=";
	cin>>a;
	cout<<("Enter the b=");
	cin>>b;
	for(i=1; i<=b; i++)
	{
		t=t*a;
	}
	cout<<"power the number"<<t;
	return 0;
}
