#include<iostream>
using namespace std;
// class Complex
// {
// public:
// int real;
// int img;
// Complex add(Complex c)
// {
//     Complex temp;
//     temp.real=real+c.real;
//     temp.img=img+c.img;
//     return temp;
// }
// };
// int main()
// {
//     Complex c1,c2,c3;
//     c1.real=30;c1.img=12;
//     c2.real=12;c2.img=30;
//     c3=c1.add(c2);
//     cout<<c3.real<<"+i"<<c3.img<<endl;
//     return 0;
// }
class Complex
{public:
    int real,img;
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.real=real+C.real;
        temp.img=img+C.img;
        return temp;
    }


};
int main()
{
    Complex C1,C2,C3;
    C1.real=30;C1.img=12;
    C2.img=7;C2.real=10;
    C3=C1+C2;
    cout<<C3.real<<"+i"<<C3.img<<endl;
    return 0;
}