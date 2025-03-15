#include <iostream>
using namespace std;
int multipl(int a, int b) 
{
    return a * b;
}

int multipl(int a, int b, int c) 
{
    return a * b * c;
}

int main()
 {
    int num1 = 11, num2 = 10, num3 = 21;

    cout << "Multiplication of 11 and 20: " << multipl(num1, num2) << endl;

    cout << "Multiplication of 11, 10 ,21 : " << multipl(num1, num2 ,num3 ) << endl;

    return 0;
}

