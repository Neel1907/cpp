#include <iostream>
#include <string>
using namespace std;
class Student 
{
private:
    string name;
    int age;
    int rollNumber;

public:
   
    Student(string n, int a, int r) {
        name = n;
        age = a;
        rollNumber = r;
    }

    Student(string n, int r) {
        name = n;
        rollNumber = r;
        age = 18;  
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student student1("neel", 20, 101);
    cout << "Student 1 Details:" << endl;
    student1.display(); 
    cout << endl;
    Student student2("patel", 102);
    cout << "Student 2 Details:" << endl;
    student2.display();

    return 0;
}

