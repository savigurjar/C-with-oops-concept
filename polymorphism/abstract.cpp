#include<iostream>
using namespace std;
class Base
{
    public:
    void fun1()
    {
        cout<<"fun of base"<<endl;
    }
    virtual void fun2()=0;
};
class Derived : public Base
{
    public:
    void fun2()
    {
        cout<<"fun2 of derived"<<endl;
    }
};
int main()
{
    Base *b = new Derived();
    b->fun1();
    b->fun2();
}
