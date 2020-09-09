#include <iostream>

using namespace std;
class ABC
{
    public:
        ABC()
        {
            cout<<"This is Zero argument constructor"<<endl;

        }

        ABC(int a)
        {
            cout<<"This is one argument construtor"<<endl;
            cout<<a<<endl;
        }
        ABC(int b,int c)
        {
            cout<<"This is two argument constructor"<<endl;
            cout<<b<<endl;
            cout<<c<<endl;
        }

};


int main()
{
    ABC a1(5),b1(23,55);

    return 0;
}
