#include <iostream>

using namespace std;

int main()
{
    int p=100;
    int *q;
    q=&p;
    cout<<p<< endl;
    cout<<q<< endl;
    cout<<*q<< endl;
    return 0;
}
