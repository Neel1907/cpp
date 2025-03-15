#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    float salary;
public:
    Employee(string n, int i, float s) : name(n), id(i), salary(s) {
        cout << "Employee Constructor Called" << endl;
    }

    ~Employee() {
        cout << "Employee Destructor Called" << endl;
    }
};

class Manager : public Employee {
protected:
    string department;
public:
    Manager(string n, int i, float s, string dept)
        : Employee(n, i, s), department(dept) {
        cout << "Manager Constructor Called" << endl;
    }

    ~Manager() {
        cout << "Manager Destructor Called" << endl;
    }
};

class Executive : public Manager {
private:
    string companyCar;
public:
    Executive(string n, int i, float s, string dept, string car)
        : Manager(n, i, s, dept), companyCar(car) {
        cout << "Executive Constructor Called" << endl;
    }

    void displayInfo() {
        cout << "Name: " << name << ", ID: " << id << ", Salary: $" << salary 
             << ", Department: " << department << ", Company Car: " << companyCar << endl;
    }

    ~Executive() {
        cout << "Executive Destructor Called" << endl;
    }
};

int main() {
    Executive exec("MARK OLIVE", 1001, 75000, "Finance", "BMW");
    exec.displayInfo();
    return 0;
}

