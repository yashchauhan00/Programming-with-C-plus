/*                                        ||Q.3||
*   Write a C++ Program to find Fibonacci Series. 0,1,1,2,3,5,8,13*/
#include<iostream>
using namespace std;
int main()
{
  int n,a=0,b=1,tem=0;
  cout<<"Enter the term of print seires=";
  cin>>n;
  cout<<"fibonacci series:\n";
  for(int i=1; i<=n; i++)
  {
  	cout<< a;
  	tem=a+b;
  	a=b;
  	b=tem;
  }
}

