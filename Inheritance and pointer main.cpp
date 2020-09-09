#include <iostream>

using namespace std;
class one
{
    public:
        void virtual  display()  // if void virtual display() = 0; the it is called pure virtual function.
        {
            cout<<"Base one"<<endl;
        }

};
class oneofone: public one
{
    public:
        void display()
        {
            cout<<"one-one derived"<<endl;
        }
};
class twoofone: public one
{
    public:
        void display()
        {
        cout<<"Two-one dreived"<<endl;
        }
};

int main()
{
    one *p1;
    twoofone t1;
    oneofone Q1;
    p1=&Q1;
    p1->display();
    p1=&t1;
    p1->display();
    return 0;
}
