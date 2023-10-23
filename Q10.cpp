/*                                        ||Q.10||
*  Write a program in C++ to count word in a sentence
*/
#include<iostream>
using namespace std;
int main()
{
	char a[100];
	int i,word=1;
	cout<<" Enter your name=";
	gets(a);
	i=0;
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		word++;
		i++;
	}
	cout<<"Numbers of word="<<word;
	return 0;
}

