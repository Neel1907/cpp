#include <iostream>
using namespace std;

class A {
public:
    virtual void display() {
        cout << "Display function from Class A" << endl;
    }
};

class B : public A {
public:
    void display() override {
        cout << "Display function from Class B" << endl;
    }
};

class C : public A {
public:
    void display() override {
        cout << "Display function from Class C" << endl;
    }
};


class D : public B, public C {
public:
    void display() override {
        cout << "Display function from Class D" << endl;
    }
};

int main() {
    D obj;
    obj.display();  

    A* ptr;
    ptr = &obj;
    ptr->display(); 

    return 0;
}

