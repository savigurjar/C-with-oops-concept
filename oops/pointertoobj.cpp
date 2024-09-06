#include<iostream>
using namespace std;
class circle{
    public:
    int radius;
    int area()
    {
        return 3.14*radius*radius;
    }
    int circumference()
    {
        return 2*3.14*radius;
    }
};
int main()
{
// circle r;
// circle *p;
// p=&r;
// object in heap
circle *p=new circle;
p->radius=7;
cout<<"area of circle:- "<<p->area()<<endl;
cout<<"circumference of circle:- "<<p->circumference()<<endl;
return 0;
}