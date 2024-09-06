#include<iostream>
using namespace std;
class Base
{
public:
int a;
void display()
{
    cout<<"display of Base"<<endl;
}
};
class Derived:public Base
{
public:
void show()
{
    cout<<"show of Derived   "<<a<<endl;
}
};
int main()
{
// Base b;
// b.display();
Derived d;
d.a=100;
d.display();
d.show();
}