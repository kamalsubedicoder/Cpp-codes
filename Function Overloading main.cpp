#include <iostream>

using namespace std;


void add(int a, int b)
{
    int sum =a+b;
    cout<<sum<<endl;
}

void add(double c, double d)
{
    double sum=c+d;
    cout<<sum<<endl;
}
void add(int a, double c)
{
    double sum=a+c;
    cout<<sum<<endl;
}
int main()
{
    add(88,12);
    add(55,0.32);
    add(50.55,0.332);
}
