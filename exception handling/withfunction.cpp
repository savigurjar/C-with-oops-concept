#include<iostream>
using namespace std;

int division(int x,int y)
{
    if(y==0)
    
        throw 1;

        return x/y;
    
}
int main()
{
    int a , b ,c;
    cin>>a>>b;
    try
    {
        c= division(a,b);
        cout<<c<<endl;
    }
    catch(int e)
    {
      cout<<"division by zero \n"<<e<<endl;
    }
 cout<<"bye"<<endl;
}