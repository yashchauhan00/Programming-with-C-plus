/*                                            ||Q.5||
Write a c++ program for  addition o two matrix
*/
#include<iostream>
using namespace std;
int main()
{
	int a[2][2], b[2][2],c[2][2],sum,i,j;
	cout<<"Enter matrix a=";
	for( i=0; i<2; i++)
	{
		for( j=0; j<2; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter matrix b=";
	for(int i=0; i<2; i++)
	{
		for( j=0; j<2; j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Sum of two matrix:\n";
	for( i=0; i<2; i++)
	{
		for( j=0; j<2; j++)
       	{
			c[i][j]=a[i][j]+b[i][j];
			cout <<c[i][j];
		}
		cout<<"\n";
	}
	
}
