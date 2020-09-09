#include <iostream>

using namespace std;
class B
{
    private:
        int a;
    public:
        int b;
    void set_data(int x, int y)
    {
        a=x;
        b=y;
    }
    int get_a()
    {
        return a;
    }
};
class D : private B
{
    private:
    int res;
    public:
    void mul()
    {
        set_data(10,120);
        res=b*get_a();
    }
    void disp()
    {
        cout<<get_a()<<endl;
        cout<<b<<endl;
        cout<<res<<endl;
    }
};

int main()
{
    D d2;
    d2.mul();
    d2.disp();
    return 0;
}
