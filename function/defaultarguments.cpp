#include<iostream>
using namespace std;
int sum(int a,int b,int c=0)
{
    return a>b && a>c ? a:(b>c?b:c);
    /* if a grater than b and c
    then return a otherwise b and else if b is grater than c then return b otherwise c*/
}
int main()
{
    cout<<sum(30,12)<<endl;
    cout<<sum(12,30,7)<<endl;
    cout<<sum(0,12,30)<<endl;
    return 0;

}