#include<iostream>
using namespace std;
void swap(int *a,int *b)
{ int temp ;
temp=*a;
*a=*b;
*b=temp;
cout<<*a<<" "<<*b<<endl;

}
int main()
{
    int s=30,v=12;
    swap(&s,&v);
    cout<<s<<" "<<v<<endl;
    return 0;
}