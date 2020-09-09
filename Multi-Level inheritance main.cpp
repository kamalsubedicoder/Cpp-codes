#include <iostream>

using namespace std;
class students
{
  protected:
   int roll;
  public:
   void get_roll()
   {
    cout<<"Enter the roll number"<<endl;
    cin>>roll;
   }
   void disp_roll()
   {
    cout<<"The roll number is: "<<roll<<endl;
   }
};
class test : public students
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

        cout<<"Mark of subject 1 is: "<<sub1<<endl;
        cout<<"Mark of subject 2 is: "<<sub2<<endl;


    }
};
class result : public test
{
    private:
    int total;
    public:
        int tot()
        {
            total=sub1+sub2;
            return total;
        }
        void disp_result()
        {

                cout<<"The total marks is: "<<tot()<<endl;

        }



};
int main()
{
    result r1;
    r1.get_roll();
    r1.disp_roll();
    r1.get_marks(100,98);
    r1.disp_marks();
    r1.tot();
    r1.disp_result();
    return 0;
}
