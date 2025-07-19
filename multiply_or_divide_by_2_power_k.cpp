#include <iostream>
using namespace std;

void multiply(int x, int k)
{
    cout<<"Multiply : "<<(x<<k)<<endl;
}

void divide(int x, int k)
{
    cout<<"Divide : "<<(x>>k)<<endl;
}

int main()
{
    multiply(10,1); // 10 * 2^1
    divide(10,1);   // 10 / 2^1
}
