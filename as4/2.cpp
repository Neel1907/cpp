#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Person object created: " << name << ", Age: " << age << endl;
    }

    ~Person() {
        cout << "Person object destroyed: " << name << ", Age: " << age << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    
    Person person1("neel", 25);
    person1.display();

    cout << endl;

    Person person2("Alice", 30);
    person2.display();

    return 0;
}

