#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    Employee(string n, int i) : name(n), id(i) {}

    void displayInfo() {
        cout << "Employee Name: " << name << ", ID: " << id << endl;
    }
};

class Manager : public Employee {
protected:
    string department;
public:
    Manager(string n, int i, string dept) : Employee(n, i), department(dept) {}

    void displayManagerInfo() {
        displayInfo();
        cout << "Department: " << department << endl;
    }
};

class Engineer : public Employee {
protected:
    string specialization;
public:
    Engineer(string n, int i, string spec) : Employee(n, i), specialization(spec) {}

    void displayEngineerInfo() {
        displayInfo();
        cout << "Specialization: " << specialization << endl;
    }
};

int main() {
    Manager mgr("NEEL", 001, "HR");
    Engineer eng("YASH", 003, "Software Development");

    cout << "Manager Details:" << endl;
    mgr.displayManagerInfo();

    cout << "\nEngineer Details:" << endl;
    eng.displayEngineerInfo();

    return 0;
}

