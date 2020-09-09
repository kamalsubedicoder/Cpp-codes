#include <iostream>

using namespace std;
void hello ();
int i=1;
void hello()
{
    while(i<=5)
    {
        cout<<"Recursion"<<endl;
        i++;
        hello();

    }
    cout<<"Recursion fnds "<<endl;

}

int main()
{
    hello();
    return 0;
}
