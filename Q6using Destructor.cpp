/*                                    ||Q.6||
*Write a C++ Program to show  Destructor Example
 Using Destructor
*/
#include<iostream>
using namespace std;
int count=0;
class demo
{
	public:
		demo()
		{
			count++;
			cout<<"\n NO of object created="<<count;
		}
		~demo()
		{
			count--;
		    cout<<"\n NO of object destroyed="<<count;
	    }
};
	
 int main()
 {
 	demo aa,bb,cc;
 	 {
 		demo dd;
	 }
 	return 0;
 }

