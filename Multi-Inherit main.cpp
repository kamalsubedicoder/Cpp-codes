#include <iostream>

using namespace std;
class A
{
    protected:
        int a;
    public:
        void set_a(int x)
        {
            a=x;
        }
        void disp()
        {
            cout<<a<<endl;
        }

};

class B
{
    protected:
        int b;
    public:
        void set_b(int y)
        {
            b=y;
        }
        void disp()
        {
            cout<<b<<endl;
        }
};
class C : public A, public B
{
    protected:
        int c;
    public:
    void set_c(int z)
    {
        c=z;
    }
    void disp()
    {
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
};
int main()
{
    C c1;
    c1.set_a(5);
    c1.set_b(10);
    c1.set_c(15);
    c1.A::disp();
    c1.B::disp();
    c1.C::disp();
    return 0;
}
