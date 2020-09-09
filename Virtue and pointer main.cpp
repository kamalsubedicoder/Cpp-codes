#include <iostream>

using namespace std;
class vehicle
{
    public:
    void virtual speed()
    {
        cout<<"limited-base"<<endl;

    }
    void virtual maintenance()
    {
        cout<<"maintain it-base"<<endl;
    }
    void virtual value()
    {
        cout<<"value- base"<<endl;
    }
};
class fourwheller: public vehicle
{
    public:
    void speed()
    {
        cout<<"limited- 2nd class"<<endl;
    }
    void maintenance()
    {
        cout<<"maintance it- 2nd class"<<endl;
    }

};
class twowheller : public vehicle
{
    public:
    void speed()
    {
        cout<<"limited- 3rd class"<<endl;
    }
    void maintenance()
    {
        cout<<"maintain it- 3rd class"<<endl;
    }
    void value()
    {
        cout<<"value- 3rd value"<<endl;
    }
};
class airbone : public vehicle
{
    public:
    void speed()
    {
        cout<<"limited- 3rd class"<<endl;
    }
};
int main()
{
    vehicle *v1;
    fourwheller f1;
    twowheller t1;
    airbone a1;
    v1=&a1;
    v1->speed();
    v1->value();
    v1->maintenance();
    v1=&f1;
    v1->speed();
    v1->value();
    v1->maintenance();

    return 0;
}
