#include <iostream>

using namespace std;

int main()
{
    string s1="ABC";
    string s2="XYZ";
    string s3=s1+s2;
    if (s1!=s2)
    {
        cout<<"Both are equal"<<endl;
    }
    else
        cout<<"Not equal"<<endl;

    if(s3==s1+s2)
    {
        cout<<"BOth are equal"<<endl;
    }
    else
    cout<<"Not equal"<<endl;

    int x=s1.compare(s2);
    if (x==0)
    {
        cout<<"s1 is equal to s2"<<endl;
    }
    else if (x<0)
    {
        cout<<"s1 is less than s2"<<endl;
    }
    else
        cout<<"S1 is greater than s2"<<endl;
    cout<<x<<endl;
    cout<<s1.length()<<endl;
    cout<<s1.capacity()<<endl;
    cout<<s1.max_size()<<endl;
    return 0;
}
