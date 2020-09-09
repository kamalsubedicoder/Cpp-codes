#include <iostream>

using namespace std;
class Hello
{
    public:
        Hello()
        {
            cout<<"Constructor is invoked"<<endl;
        }

        ~Hello()
        {
            cout<<"Destructor is invoked"<<endl;
        }

};


int main()
{
    Hello h1;
    return 0;
}
