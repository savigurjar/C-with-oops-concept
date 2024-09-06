#include<iostream>
using namespace std;
float add(float s ,float v)
{
    float t;
    t=s+v;
    return t;
}
int main()
{
float s = 30.0,v=12.0,t;
t=add(s,v);
cout<<t<<endl;

}