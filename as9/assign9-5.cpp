#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) : name(n), age(a) {}

    virtual void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    int rollNumber;
public:
    Student(string n, int a, int roll) : Person(n, a), rollNumber(roll) {}

    void displayInfo() override {
        Person::displayInfo();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class GraduateStudent : public Student {
private:
    string thesisTitle;
public:
    GraduateStudent(string n, int a, int roll, string thesis)
        : Student(n, a, roll), thesisTitle(thesis) {}

    void displayInfo() override {
        Student::displayInfo();
        cout << "Thesis Title: " << thesisTitle << endl;
    }
};

int main() {
    GraduateStudent gs("MAX", 20, 007, "Advance Application Development");
    gs.displayInfo();
    return 0;
}

