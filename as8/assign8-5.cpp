#include <iostream>
using namespace std;
int multiply(int a, int b) 
{
    return a * b;
}


int multiply(int a, int b, int c = 1) {
    return a * b * c;
}

int main() {
    cout << "Multiplication of two numbers: "<< multiply(3, 4) << endl;
    cout << "Multiplication of three numbers: "<< multiply(3, 4, 2) << endl;
    
    return 0;
}

