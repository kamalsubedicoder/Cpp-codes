#include <iostream>

using namespace std;

class number
{
    private:
        int num;
    public:
        void input()
        {

            cin>>num;
        }
        void check()
        {
            if (num%2==0)
            {
                cout<<"The given number is even number"<<endl;
            }
            else
            {
                cout<<"The given number is odd number"<<endl;
            }


        }

};
int main()
{
    number n1;
    n1.input();
    n1.check();
    return 0;
}
