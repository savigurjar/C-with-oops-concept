#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofs("My.txt",ios::trunc);
    ofs<<"v"<<endl;
    ofs<<28<<endl;
    ofs<<"bts"<<endl;
    ofs.close();
}