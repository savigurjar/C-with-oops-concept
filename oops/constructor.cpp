#include<iostream>
using namespace std;
class rectangle{
private:
int length;
int breadth;
public:
rectangle()
{
    // default or non-paramitrized constructor 
    length=1;
    breadth=1;
}
rectangle(int l,int b)
{
    // paramitrized constructor
    setLength(l);
    setBreadth(b);
}
rectangle(rectangle &r)
{
    // copy constructor  
    length=r.length;
    breadth=r.breadth;
}
void setLength(int l)
{
    if(l>0)
    length=l;
    else
    length=1;
}
void setBreadth(int b)
{
    if(b>0)
    breadth=b;
    else
    breadth=1;
}
int getLength(){return length;}
int getBreadth(){return breadth;}
int area()
{
    return length*breadth;
}
int perimeter()
{
    return 2*(length*breadth);
}
};

int main()
{
// rectangle r1;
// rectangle r1(10,5);
rectangle r1(30,12);
rectangle r2(r1);
// cout<<r1.area();
cout<<r2.area();

}