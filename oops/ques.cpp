#include<iostream>
using namespace std;
class Student{
private:
int roll;
string name;
int chemistry;
int physics;
int maths;
public:
Student(int r,string n,int c,int p,int m)
{
    roll=r;
    name=n;
    chemistry=c;
    physics=p;
    maths=m;
}
int total(){
    return chemistry+physics+maths;
}
char grade(){
float average=total()/3;
if(average>60)
return 'A';
else if(average>=40 && average<60)
return 'B';
else
return 'C';
}
};
int main()
{
    int roll;
    string name;
    int m,p,c;
    cout<<"enter roll nu of a student: ";
    cin>>roll;
    cout<<"enter name of a student: ";
    cin>>name;
    cout<<"ebter marks in 3 subjects:- ";
    cin>>m>>p>>c;
    Student s(roll,name,m,p,c);
    cout<<"Total Marks: "<<s.total()<<endl;
    cout<<"Grade of Student: "<<s.grade()<<endl;
}
