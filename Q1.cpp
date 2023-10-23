/*                                    ||Q.1||
 *Write a c++ program to swap two number without using third variable 
 */
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter value a=";
	cin>>a;
	cout<<"Enter vlaue b=";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swap a= "<<a<<"\n b= "<<b<<endl;   
}
