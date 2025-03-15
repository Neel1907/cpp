#include <iostream>
using namespace std;
class Point 
{
private:
    int x, y;  

public:
    
    Point(int x = 0, int y = 0):x(x), y(y){}
    Point operator+(const Point& other) 
	{
        return Point(x + other.x, y + other.y);
    }

    void display() const 
	{
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {

    Point p1(22, 43);
    Point p2(43, 25);

    Point p3 = p1 + p2;

    cout << "Point 1: ";
    p1.display();
    cout << endl;

    cout << "Point 2: ";
    p2.display();
    cout << endl;

    cout << "Result of adding Point 1 and Point 2: ";
    p3.display();
    cout << endl;

    return 0;
}

