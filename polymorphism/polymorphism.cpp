#include<iostream>
using namespace std;
class Car
{ 
    public:
virtual void start()=0;
virtual void stop()=0;

};
class Innova : public Car
{
public:
void start()
{
    cout<<"innova started"<<endl;
}
void stop()
{
    cout<<"innova stopped"<<endl;
}};
class Swift : public Car{
    public:
    void start()
    {
        int n;
        cin>>n;
        cout<<"swift started";
    }
    void stop()
    {
        cout<<"swift stopped";
    }
};
int main()
{
    Car *c = new Innova();
    c->start();
    c->stop();
    c = new Swift();
    c->start();
}