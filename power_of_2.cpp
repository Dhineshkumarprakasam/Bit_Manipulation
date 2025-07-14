#include <iostream>
using namespace std;

int main()
{
    //power of 2
    int x;

    cout<<"Enter your number : ";
    cin>>x;

    if((x&(x-1))==0)
        cout<<"Yes, it is power of 2";
    else
        cout<<"No, it is not power of 2";

}
