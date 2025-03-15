#include <iostream>
using namespace std;


class Shape {
public:
    
    double area(double radius) {
        return 3.14 * radius * radius;
    }

    double area(double length, double width) {
        return length * width; 
    }

    double area(double base, double height, bool isTriangle) {
        if (isTriangle)
            return 0.5 * base * height; 
        return 0.0; 
    }
};


class Animal {
public:
   
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    
    void sound() override {
        cout << "Dog barks!" << endl;
    }
};

class Cat : public Animal {
public:
    
    void sound() override {
        cout << "Cat meows!" << endl;
    }
};

int main() {
   
    Shape shape;
    cout << "Area of circle with radius 5: " << shape.area(5.0) << endl;
    cout << "Area of rectangle with length 4 and width 6: " << shape.area(4.0, 6.0) << endl;
    cout << "Area of triangle with base 4 and height 6: " << shape.area(4.0, 6.0, true) << endl;

    
    Animal* animal;

    Dog dog;
    Cat cat;

    animal = &dog;
    animal->sound(); 

    animal = &cat; 
    animal->sound(); 

    return 0;
}
