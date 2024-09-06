#include<iostream>
using namespace std;
class Base
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void funBase()
    {
a=30;
b=12;
c=7;
    }
};
class Derived:Base
{
public:
int funDerived()
{
//  a=1;//only protected and public
b=12;
c=6;
}
};
int main()
{
    //only public
    Base();
    
}