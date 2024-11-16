#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the hours:";
    cin>>a;
    int b;
    cout<<"Enter the minutes:";
    cin>>b;
    int c;
    cout<<"Enter the seconds:";
    cin>>c;
    int tot;
    tot=a*3600+b*60+c;
    cout<<"Total seconds is "<<tot<<endl;
    return 0;
}
