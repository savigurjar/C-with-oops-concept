#include <iostream>
using namespace std;

class rectangle
{
    public:
    int length, breadth;

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
   
    rectangle r1;
    r1.length=30;
    r1.breadth=12;
    cout<<"area is:- "<<r1.area()<<endl;
    cout<<"perimeter is:- "<<r1.perimeter()<<endl;
    return 0;

}