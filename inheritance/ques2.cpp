#include<iostream>
using namespace std;
class Car
{
    private:
    string carName;
    public:
    Car(string n)
    {
        carName=n;
    }
    string getCar(){return carName;}
};
class carPrize : public Car
{
    private:
     int prize;
     public:
     carPrize(string n, int p):Car(n)
     {
        prize = p;
     }
     int getPrize(){return prize;}
};
int main()
{
carPrize c("porche",500000000);
cout<<"car name is "<<c.getCar()<<" and prize is "<<c.getPrize()<<endl;
return 0;
}