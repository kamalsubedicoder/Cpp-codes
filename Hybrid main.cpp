#include <iostream>

using namespace std;
class student
{
    protected:
        int roll;
    public:
        void get_roll()
        {
            cout<<"Enter the roll number: "<<endl;
            cin>>roll;
        }
        void disp_roll()
        {
            cout<<"The roll number is: "<<roll<<endl;
        }
};
class test : public student
{
    protected:
        int sub1;
        int sub2;
    public:
        void get_marks(int x, int y)
        {
            sub1=x;
            sub2=y;
        }
        void disp_marks()
        {
            cout<<"The mark of subject1 is: "<<sub1<<endl<<"The mark of subject is: " <<sub2<<endl;
        }
};
class sport
{
    protected:
        int sport_mark;
    public:
        void get_score(int z)
        {
            sport_mark=z;
        }
        void dispscore()
        {
            cout<<"The sports mark is: "<<sport_mark<<endl;
        }
};
class result : public test, public sport
{
    protected:
        int total;
    public:
        void Total()
        {
            total= sub1+sub2+sport_mark;
        }
        void disp()
        {
            cout<<"The total mark is: "<<total<<endl;
        }

};
int main()
{
    result r1;
    r1.get_roll();
    r1.disp_roll();
    r1.get_marks(98,95);
    r1.disp_marks();
    r1.get_score(98);
    r1.dispscore();
    r1.Total();
    r1.disp();\
    return 0;
}
