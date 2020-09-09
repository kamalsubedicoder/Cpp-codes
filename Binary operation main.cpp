#include <iostream>

using namespace std;
class unary
{
    private:
        int count;
    public:
    unary()
    {

    }
    unary(int a)
    {
        count=a;

    }
    unary operator ++(int a)
    {
        unary b;
        b.count=count+1;
        cout<<a+1;

    }
    void disp()
    {

        cout<<count;

    }


};

int main()
{
    unary c1(3);
    unary c2;
    c2=++c1;
    c2.disp();
    return 0;
}
