#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    int age;
public:
    Animal(string n, int a) : name(n), age(a) {}

    void sound() {
        cout << name << " makes a sound." << endl;
    }
};

class Mammal : public Animal {
protected:
    string furType;
public:
    Mammal(string n, int a, string f) : Animal(n, a), furType(f) {}

    void displayFurType() {
        cout << name << " has " << furType << " fur." << endl;
    }
};

class Bird : public Animal {
protected:
    float wingSpan;
public:
    Bird(string n, int a, float w) : Animal(n, a), wingSpan(w) {}

    void displayWingSpan() {
        cout << name << " has a wingspan of " << wingSpan << " meters." << endl;
    }
};

int main() {
    Mammal dog("Dog", 5, "Short");
    Bird eagle("Eagle", 3, 2.5);

    cout << "Mammal Details:" << endl;
    dog.sound();
    dog.displayFurType();

    cout << "\nBird Details:" << endl;
    eagle.sound();
    eagle.displayWingSpan();

    return 0;
}

