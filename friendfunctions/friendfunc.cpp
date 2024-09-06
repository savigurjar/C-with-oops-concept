#include<iostream>
using namespace std;
class test
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend void fun();
};
void fun()
{
    test t;
    t.a=30;
    t.b=12;
    t.c=7;
 
}
