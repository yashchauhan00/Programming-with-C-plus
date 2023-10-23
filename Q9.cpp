/*                                        ||Q.9||
* Write a program in C++ Program to Print Alphabet Triangle.
*/
#include <iostream>  
using namespace std;  
int main()  
{  
    int i, j, k,n,m,l;
    char ch='A'; 
	cout<<"The number of triangles the user wants to print=";
	cin>>n;  
	cout<<"Alphabet Triangle : \n"; 
    for(i=1;i<=n;i++)    
    {    
        for(j=n;j>=i;j--)
		   {    
            cout<<" ";
		   }
    for(k=1; k<=i; k++)
           { 
      		cout<<ch++;
	       }
	for(m=1; m<i; m++)    
        {    
		cout<<ch++;
	    }
      cout<<"\n";
    }
   
}
