#include <iostream>
using namespace std;

class Printer {
public:
    void print() {
        cout << "Printing document..." << endl;
    }
};

class Scanner {
public:
    void scan() {
        cout << "Scanning document..." << endl;
    }
};

class MultiFunctionDevice : public Printer, public Scanner {
public:
    void display() {
        cout << "Multi-function device in use" << endl;
    }
};

int main() {
    MultiFunctionDevice mfd;
    mfd.display();
    mfd.print();
    mfd.scan();
    return 0;
}

