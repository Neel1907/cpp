#include <iostream>
#include <string>
using namespace std;
class Employee {
public:
    virtual double calculateSalary() const = 0;
    
    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee {
private:
    double monthlySalary;

public:
  
    FullTimeEmployee(double salary) : monthlySalary(salary) {}

    double calculateSalary() const override {
        return monthlySalary;  
    }
};

class PartTimeEmployee : public Employee {
private:
    double hourlyWage;
    int hoursWorked;

public:
    
    PartTimeEmployee(double wage, int hours) : hourlyWage(wage), hoursWorked(hours) {}

    double calculateSalary() const override {
        return hourlyWage * hoursWorked;  
    }
};

int main() {

    Employee* employee1 = new FullTimeEmployee(5000.0);  
    Employee* employee2 = new PartTimeEmployee(20.0, 100);  
    cout << "Full-Time Employee Salary: " << employee1->calculateSalary() << endl;
    cout << "Part-Time Employee Salary: " << employee2->calculateSalary() << endl;

    delete employee1;
    delete employee2;

    return 0;
}

