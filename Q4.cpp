/*                                     ||Q.4||
Write a C++ Program to Check given number is Prime number or not
*/
#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"Enter the value=";
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<" Is Prime no";
	}
	else{
		cout<<"Is Not prime no";
	}
	return 0;
}


