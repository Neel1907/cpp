#include <iostream>
using namespace std;

class Shape {
public:
   
    double (*area_ptr)();

    virtual double area() = 0; 
};


class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {
        
        area_ptr = &Circlearea;
    }

    double area() override {
        return 3.14 * radius * radius; 
    }
};


class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {
       
        area_ptr = &Rectanglearea;
    }

    double area() override {
        return length * width; 
    }
};

int main() {
   
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

   
  
    cout << "Area of Circle: " << (circle.*circle.area_ptr)() << endl;

    
    cout << "Area of Rectangle: " << (rectangle.*rectangle.area_ptr)() << endl;

    return 0;
}
