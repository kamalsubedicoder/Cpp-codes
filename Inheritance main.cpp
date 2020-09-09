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
class D : public B
{
    private:
    int res;
    public:
    int mul()
    {
        res=b*get_a();
        return res;
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
    D d1;

    d1.set_data(2,3);
    d1.b=100;
    d1.mul();
    d1.disp();
    return 0;
}
