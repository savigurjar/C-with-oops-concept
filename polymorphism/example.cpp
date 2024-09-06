#include<iostream>
using namespace std;
class Shape
{
    public:
    virtual int Rect() = 0;
    virtual int Cir() = 0;
};
class Rectangle : public Shape
{
    public:
    int Rect()
    {
        int l,b;
        cin>>l>>b;
        int area = l*b;
        cout<<"area of rectangle"<<endl;
    }
};
class Circle : public Shape{
    public:
    int Cir()
    {
        int 
    }
}