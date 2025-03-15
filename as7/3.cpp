#include <iostream>
using namespace std;
class Complex
 {
private:
    double real, imag;

public:
    
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator*(const Complex& other) {
       
        double realPart = (real * other.real) - (imag * other.imag);
        double imagPart = (real * other.imag) + (imag * other.real);
        return Complex(realPart, imagPart);
    }

    void display() const {
        cout << real;
        if (imag >= 0) 
            cout << " + " << imag <<endl;
        else 
            cout << " - " << -imag <<endl;
    }
};

int main() {
    
	 Complex c1(4, 7);      
	 Complex c2(3, 5);  

    Complex c3 = c1 * c2;

    cout << "Complex number 1: ";
    c1.display();
    cout << endl;

    cout << "Complex number 2: ";
    c2.display();
    cout << endl;

    cout << "Result of multiplication: ";
    c3.display();
    cout << endl;

    return 0;
}

