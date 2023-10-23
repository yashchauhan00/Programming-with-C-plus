/*                                        ||Q.16||
*   Write a program in C++ that finds factorial of a given number using for loop.
*/
#include<iostream>
using namespace std;  
int main()  
{  
   int i,fact=1,number;    
  cout<<"Enter any Number: ";    
 cin>>number;    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
  return 0;  
}  
