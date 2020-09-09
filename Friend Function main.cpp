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
        friend class two;
};
class two
{
    public:
        void fun1(one a)
        {
            cout<<a.data1<<endl;
        }
        void fun2(one b)
        {
            cout<<b.data1<<endl;
        }
};
int main()
{
    two t1;
    one o1;
    t1.fun1(o1);
    t1.fun2(o1);

    return 0;
}
