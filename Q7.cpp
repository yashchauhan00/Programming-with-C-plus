/*                                    ||Q.7||
*Write a C++ Program to display Student Details using class.
*/
#include<iostream>
using namespace std;
class student
{
                
    char name[20],regno[10],branch[10];
    int sem;
    public:
    void input();
    void display();              
};
void student::input()
{
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Regno.:";
        cin>>regno;
        cout<<"Enter Branch:";
        cin>>branch;
        cout<<"Enter Sem:";
        cin>>sem;
}
void student::display()
{
        cout<<"\nName:"<<name;
        cout<<"\nReg no.:"<<regno;
        cout<<"\nBranch:"<<branch;
        cout<<"\nSem:"<<sem;
}
int main()
{
        student s;
        s.input();
        s.display();
}
