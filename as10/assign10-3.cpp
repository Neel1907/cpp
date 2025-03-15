#include <iostream>
using namespace std;

class Shape {
protected:
    float area;
public:
    Shape(float a) : area(a) {}

    void calculateArea() {
        cout << "Area: " << area << endl;
    }
};

class Color {
protected:
    string color;
public:
    void setColor(string c) {
        color = c;
    }
};

class ColoredShape : public Shape, public Color {
public:
    ColoredShape(float a, string c) : Shape(a) {
        setColor(c);
    }

    void displayDetails() {
        cout << "Shape Area: " << area << ", Color: " << color << endl;
    }
};

int main() {
    ColoredShape cs(25.5, "Red");
    cs.displayDetails();
    
    return 0;
}

