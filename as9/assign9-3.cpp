#include <iostream>
using namespace std;

class Shape {
protected:
    int width, height;
public:
    Shape(int w, int h) : width(w), height(h) {
        cout << "Shape Constructor Called" << endl;
    }
    
    ~Shape() {
        cout << "Shape Destructor Called" << endl;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {
        cout << "Rectangle Constructor" << endl;
    }

    int area() {
        return width * height;
    }

    ~Rectangle() {
        cout << "Rectangle Destructor " << endl;
    }
};

int main() {
    Rectangle rect(5, 10);
    cout << "Area of Rectangle: " << rect.area() << endl;
    return 0;
}

