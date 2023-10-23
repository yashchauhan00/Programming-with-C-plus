/*                                        ||Q.2||
* Write a C++ Program to find all roots of a Quadratic Equation.
*/
#include <iostream>
#include <cmath> 
 
using namespace std;
 
int main() 
{
  int a,b,c,D;
  float x1,x2,x;
  cout<<"Enter value of a,b,&c=";
  cin>>a>>b>>c;
  D=b^2-4*a*c;
  if(D>=0)
  {
  	if(D>0)
  	  {
  		x1=(-b+sqrt(D))/2*a;
  		x2=(-b-sqrt(D))/2*a;
	  }
	  else
	  {
	  	x1=x2=-b/2*a;
	  	cout<<"x1=x2"<<x;
	  }  
  }
  else
  {
  	cout<<"Root are imaginary";
  }
  return 0;
}
