#include <iostream>
using namespace std;


//check if kth bit is 0 or 1
void set_or_unset(int x, int k)
{
    if((x&(1<<k))==0)
        cout<<"Unset"<<endl; //kth bit is 0
    else
        cout<<"Set"<<endl; //kth bit is  1
}


// flip kth bit
void toggle(int x, int k)
{
    cout<<"Actual : "<<x<<" ,New : "<<(x^(1<<k))<<endl;
}

void set_bit(int x, int k) // set the kth bit as 1
{
    cout<<"set : "<<(x|(1<<k))<<endl;
}

void unset_bit(int x, int k)
{
    cout<<"unset : "<<(x&~(1<<k))<<endl;
}

int main()
{
    set_or_unset(10,2);
    toggle(6,2);
    set_bit(5,1);
    unset_bit(5,0);
}
