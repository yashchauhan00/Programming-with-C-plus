/*                                       ||Q.5||
* write a c++ program to demonstrate an example of singel inheritance 
*/
#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
		public:
			void input()
			{
				cout<<"Enter Number X=";
				cin>>x;
			}
};
class B: public A
{
	int y; 
	public:
		void getdata()
		{
			cout<<"Enter Number Y=";
			cin>>y;
		}
		void putdata()
	    {
	    	cout<<"Addition="<<x+y;
		}
};
int main()
   {
	    B aa;
	    aa.input();
	    aa.getdata();
	    aa.putdata();
	     return 0;
}
