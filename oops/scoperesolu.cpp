#include<iostream>
using namespace std;
class circle{private:
    int radius;
    public:
    circle(int r)
    {
        radius=r;
    }
    int area();
    int circumference();
};
int circle::area()
{
    return 2*3.14*radius;
}
int circle::circumference()
{
    return 3.14*radius*radius;
}
int main()
{
    circle c(7);
    cout<<c.area()<<endl;
    cout<<c.circumference();
    return 0;
}