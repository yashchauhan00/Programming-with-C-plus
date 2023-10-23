/*                                        ||Q.13||
*    Write a program in C++ to find the vowels in the string provided by the users.
*/
#include <iostream>
using namespace std;

int main()
{
    char str[100] ;
    cout<<" Enter the string=";
    cin>>str;
    int vowels = 0;
    
    // can also do str[i] != '\0' in condition below both would work
    for(int i = 0; str[i]; i++)  
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'
        ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
        {
		    vowels++;
        }
    }
    
    cout << "Total Vowels : " << vowels;
    
    return 0;
}
