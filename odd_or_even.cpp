#include <iostream>
using namespace std;

int main()
{
    //odd or even
    int x;

    cout<<"Enter your number : ";
    cin>>x;

    if((x&1)==0)
        cout<<"Even";
    else
        cout<<"Odd";

}
