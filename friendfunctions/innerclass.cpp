#include<iostream>
using namespace std;
class Outer
{
    void fun()
    {
        i.display();
    }
public:
class Inner
{
    public:
    void display()
    {
        cout<<"Display of inner"<<endl;
    }
};
Inner i;
};
int main()
{
    
}