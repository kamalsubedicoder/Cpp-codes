#include <iostream>

using namespace std;

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int add(int num1,int num2)
{
    int res=num1+num2;
    return res;

}
int sub(int num1,int num2)
{
    int dope=num1-num2;
    return dope;

}
int main()
{
    int a,b;
    cin>>a>>b;
    int c= add(a,b);
    int d = sub(a,b);
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}
