#include<iostream>
using namespace std;
// int main()
// {
//     int const x=30;
//      const int x=30;
//     // x++;
//     cout<<x;
// }

int main()
{
   const int x=10;
    const int *ptr=&x;
    // ++*ptr;
    cout<<*ptr<<" "<<x<<endl;
}