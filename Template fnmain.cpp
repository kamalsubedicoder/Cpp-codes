#include <iostream>

using namespace std;
template<class T, class S>
T fun(T a, S b)
{
    if (a>b)
        return a,b;
    else
        return b;
}
int main()
{
    cout<<fun(4,4)<<endl;
    cout<<fun(5,9)<<endl;
    cout<<fun('z', 'a')<<endl;
    cout<<fun(5.223,6.14252)<<endl;
    return 0;

}
