#include <iostream>

using namespace std;
class sub
{
    private:
        int count;
    public:
        sub()
        {

        }
        sub(int c)
        {
            count=c;
        }
        sub operator ++()
        {
            ++count;
            sub t;
            t.count=count;
            return t;
        }
        sub operator ++(int)
        {
            count ++;
            sub t;
            t.count=count;
            return t;
        }
        sub operator --()
        {
            --count;
            sub t;
            t.count=count;
            return t;

        }
        sub operator --(int)
        {
            count--;
            sub t;
            t.count=count;
            return t;
        }
        void disp()
        {
            cout<<count<<endl;
        }
};

int main()
{
    sub c1(15);
    sub c2,c4,c6,c8;
    c2=--c1;
    sub c3(20);
    c2.disp();
    c4=c3--;
    c4.disp();
    sub c5(20);
    c6=++c5;
    c6.disp();
    sub c7(20);
    c8=c7++;
    c8.disp();
    return 0;
}
