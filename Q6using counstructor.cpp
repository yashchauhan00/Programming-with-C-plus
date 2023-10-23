/*                                    ||Q.6||
*Write a C++ Program to show Constructor and  Example
 Using constructor
*/
#include<iostream>
using namespace std;
class demo
{
	int a,b;
	public:
		demo()
		{
			a=10;
			b=10;
		}
		void putdata();
};
void demo::putdata()
{
	cout<<"a="<<a<<"\tb="<<b;
}
 int main()
 {
 	demo aa;
 	aa.putdata();
 	return 0;
 }

