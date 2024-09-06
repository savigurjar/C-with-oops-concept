#include <iostream>
using namespace std;
class Base
{
public:
    virtual void fun()
    {
        cout << "fun of base " << endl;
    }
};
class derived : public Base
{
public:
    void fun()
    {
        cout << "fun of derived" << endl;
    }
};
int main()

{
    // Base *p = new derived();

    derived d;
    Base *p = &d;
    p->fun();
}