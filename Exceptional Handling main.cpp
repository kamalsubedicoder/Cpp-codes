#include <iostream>

using namespace std;
void divide(double x,double y, double z);
void divide(double x, double y, double z)
{
    double res;
    if((y-z)==0)
    {
        throw(0);
    }
    else
    {
    res= x/(y-z);
    cout<<res<<endl;
    }
};
int main()
{
    try
    {
    divide(2.0,3.0,4.0);
    divide(2.0,5.0,5.0);
    }
    catch(int a)
    {
        cout<<"Exceptional caught"<<endl;
    }
    return 0;
}
