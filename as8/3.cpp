#include <iostream>
#include <cmath>  
using  namespace std;
class Shape {
public:

    virtual double area() const = 0;
	 virtual ~Shape() {}  
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    double area() const override {
        return M_PI * radius * radius; 
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;  
    }
};

int main() {
    Shape* shape2 = new Rectangle(4.0, 6.0);  
	    Shape* shape1 = new Circle(5.0);  

   cout << "Area of Circle: " << shape1->area() << endl;
   cout << "Area of Rectangle: " << shape2->area() << endl;

    delete shape1;
    delete shape2;

    return 0;
}

