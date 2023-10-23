/*                                        ||Q.15||
*   Write a program in C++ to display current date and time.

*/
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t timetoday;
    time(&timetoday);
    cout << "Calendar date and time as par today is : " << asctime(localtime(&timetoday));
    return 0;
}
