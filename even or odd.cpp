#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num%2==0)
    {
        cout<<"The number "<<num<<" is even"<<endl;
    }
    else
    {
        cout<<"The number "<<num<<" is odd"<<endl;
    }
    return 0;
}
