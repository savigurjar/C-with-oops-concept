#include <iostream>
using namespace std;
class Demo
{
    int *d;

public:
    Demo()
    {
        d = new int[10];
        cout << "constuctor" << endl;
    }
    ~Demo()
    {
        delete[] d;
        cout << "destructor" << endl;
    }
};
void fun()
{
    Demo *d = new Demo();
    delete d;
    // Demo d;
}
int main()
{
    fun();
}