#include <iostream>

using namespace std;
class two;
class one
{
    private:
        int data1;
    public:
        one()
        {
            data1=100;
        }

        friend void hello(one , two );
};
class two
{
    private:
        int data2;
    public:
        two()
        {
            data2=200;
        }

        friend void hello(one a, two b );
};
void hello(one a, two b)
{
    cout<<a.data1<<endl;
    cout<<b.data2<<endl;
}

int main()
{
    one o1;
    two t1;
    hello(o1,t1);
    return 0;
}
