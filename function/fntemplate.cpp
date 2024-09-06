#include<iostream>
using namespace std;
template <class v>
v Max( v s, v t)
{
    if(s>t)
    return s;
    else
    return t;
}
int main()
{
    cout<<Max(30,12)<<endl;
    cout<<Max(30.12f,12.1f)<<endl;

}