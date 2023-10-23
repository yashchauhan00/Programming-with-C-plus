/*                                        ||Q.18||
*  Write a C++ Program to find the Area of rectangle using function overloading.
*/
#include <iostream>
using namespace std;

int areaOfRectangle(int l, int w)
{
    return l * w;
}
float areaOfRectangle(float l, float w)
{
    return l * w;
}

int main()
{
    int l, w;
    cout << "Enter the length(L) = ";
    cin >> l;
    cout << "Enter the Width(W) = ";
    cin >> w;

    cout << "Area of rectangle: " << areaOfRectangle(l, w);

    return 0;
}

