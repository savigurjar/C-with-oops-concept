#include<iostream>
using namespace std;

class Employee {
    private:
    int diwali;
    string name;
    
    public:
    Employee(int d, string n) { // Corrected the type of second parameter
        diwali = d;
        name = n;
    }
    
    int getEmployeeId() { return diwali; }
    string getName() { return name; }
};

class FulltimeEmployee : public Employee {
    private:
    int salary;
    
    public:
    FulltimeEmployee(int d, string n, int sal) : Employee(d, n) {
        salary = sal;
    }
    
    int getSalary() { return salary; }
};

class ParttimeEmployee : public Employee {
    private:
    int wage;
    
    public:
    ParttimeEmployee(int d, string n, int w) : Employee(d, n) {
        wage = w;
    }
    
    int getWage() { return wage; }
};

int main() {
    ParttimeEmployee p1(1, "jk", 700);
    FulltimeEmployee p2(2, "jimin", 5000);
    
    cout << "Salary of " << p2.getName() << " is " << p2.getSalary() << endl;
    cout << "Daily wage of " << p1.getName() << " is " << p1.getWage() << endl;
    
    return 0;
}
