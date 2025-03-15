#include <iostream>
#include <cmath>  
using namespace std;

class Circle {
private:
    double radius;  

public:

    Circle(double r) {
        radius = r;
    }

    double calculateArea() {
        return M_PI * radius * radius;  // Formula for area: p * r^2
    }
};

int main() {
    
    Circle circle1(5.0);  // Radius = 5.0
    Circle circle2(7.0);  // Radius = 7.0

    cout << "Area of Circle 1 (radius = 5.0): " << circle1.calculateArea() << endl;
    cout << "Area of Circle 2 (radius = 7.0): " << circle2.calculateArea() << endl;

    return 0;
}

