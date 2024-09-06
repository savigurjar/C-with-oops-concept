#include<iostream>
using namespace std;
template<typename T>
void fun(T s)
{
    s();
}
int main()
{
    // [](){cout<<"taetae"<<endl;}();
    
    // [](int s,int v){cout<<"taetae "<<s+v<<endl;}(12,30);
  
   //cout<<( [](int s,int v){return s+v;}(12,30));
 
//   int t = [](int s,int v)->int{return s*v;}(12,30);
//   cout<<t;

// int v = 12;
// [v](){cout<<v<<endl;}();

// int v =12;
// auto f=[&v]{cout<<v<<endl;};
// f();
// v++;
// fun(f); //take reference

   }