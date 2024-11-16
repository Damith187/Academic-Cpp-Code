#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int marks;
    cout<<"Enter the marks:";
    cin>>marks;
    if (marks<35)
    {
        cout<<"Fail";
    }
    else if (marks<50)
    {
        cout<<"S";
    }
    else if (marks<65)
    {
        cout<<"C";
    }
    else if (marks<75)
    {
        cout<<"B";
    }
    else
    {
        cout<<"A";
    }
    return 0;
}
