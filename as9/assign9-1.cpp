#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}

    void display() {
        cout << "Name: " << name << ", Age: " << age;
    }
};

class Employee : public Person {
private:
    float salary;
public:
    Employee(string n, int a, float s) : Person(n, a), salary(s) {}

    void display() {
        Person::display();
        cout << ", Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp("Alice", 30, 55000);
    emp.display();
    return 0;
}

