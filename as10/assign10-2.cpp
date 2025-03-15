#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
public:
    Student(string n, int r) : name(n), rollNo(r) {}

    void study() {
        cout << name << " (Roll No: " << rollNo << ") is Studying..." << endl;
    }
};

class Faculty {
protected:
    string facultyName, department;
public:
    Faculty(string f, string d) : facultyName(f), department(d) {}

    void teach() {
        cout << facultyName << " from " << department << " is Teaching students" << endl;
    }
};

class TeachingAssistant : public Student, public Faculty {
public:
    TeachingAssistant(string n, int r, string f, string d)
        : Student(n, r), Faculty(f, d) {}

    void assist() {
        cout << name << " is Assisting with teaching..." << endl;
    }
};

int main() {
    TeachingAssistant ta("divya mam", 108, "neel ", "Computer Science");
    ta.study();
    ta.teach();
    ta.assist();
    return 0;
}
