#include<iostream>
using namespace std;
class your;
class my 
{
    private:
    int v = 30;
    friend your;
};
class your
{
    public:
    my s;
    void fun()
    {
        cout<<s.v;
    }

};