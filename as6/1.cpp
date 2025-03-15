#include <iostream>
using namespace std;
int add(int a, int b) 
{
    return a + b;
}

float add(float a, float b) 
{
    return a + b;
}

int main() 
{
	
    int intResult;
    float floatResult;

    intResult = add(10, 20);
    cout << "The sum of integers 11 and 20 is: " << intResult << endl;

    floatResult = add(10.5f, 20.3f);
    cout << "The sum of floating-point numbers 11.5 and 20.3 is: " << floatResult << endl;

    return 0;
}

