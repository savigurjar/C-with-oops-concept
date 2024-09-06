#include<iostream>
using namespace std;
class Base
{
public:
Base()
{
    cout<<"costructor of base"<<endl;
}
 virtual ~Base()
{
    cout<<"destructor of base"<<endl;
}
};
class Derived:public Base
{
    public:
    Derived()
    {
        cout<<"costructor of derived"<<endl;
    }
   virtual ~Derived()
    {
        cout<<"destructor of derived"<<endl;
    }
};
void fun()
{
// Derived d;
Base *p=new Derived();
delete p;
}
int main()
{
fun();
}