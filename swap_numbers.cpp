#include <iostream>
using namespace std;


int main()
{
    int x,y;
    cout<<"Enter x : ";
    cin>>x;

    cout<<"Enter y : ";
    cin>>y;

    cout<<endl;
    cout<<"Before swapping : "<<endl;
    cout<<"x : "<<x<<" and "<<"y : "<<y<<endl;

    x=x^y;
    y=x^y;
    x=x^y;

    cout<<endl;
    cout<<"After swapping : "<<endl;
    cout<<"x : "<<x<<" and "<<"y : "<<y<<endl;
}
