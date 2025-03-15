#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
 
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    Rectangle(const Rectangle& r) {
        length = r.length;
        width = r.width;
        cout << "Copy constructor called!" << endl;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    
    Rectangle rect1(10.5, 5.0);
    
    cout << "Rectangle 1: ";
    rect1.display();

    Rectangle rect2 = rect1;

    cout << "Rectangle 2 : ";
    rect2.display();

    return 0;
}

