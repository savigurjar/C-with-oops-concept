// constructor in inheritance
#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
        cout<<"non-param of base"<<endl;
    }
    Base(int x)
    {
        cout<<"param of base"<<x<<endl;
    }
};
class Derived:public Base{
    public:
    Derived()
    {
        cout<<"non_param derived"<<endl;
    }
    Derived(int y)
    {
        cout<<"param of derived"<<y<<endl;
    }
    Derived(int x,int y):Base(x)
    {
        cout<<"param of derived"<<y<<endl;
    }
};
int main()
{
// Derived d;
// Derived d(30);
Derived d(30,12);
}