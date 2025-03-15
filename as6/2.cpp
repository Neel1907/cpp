#include <iostream>
#include <string>
using namespace std;
void print(int num) 
{
    cout << "Integer: " << num << endl;
}

void print(float num) 
{
    cout << "Float: " << num << endl;
}

void print(const string& str) 
{
    cout << "String: " << str << endl;
}

int main() {
    int intVal = 5;
    float floatVal = 3.14f;
    string strVal = "hi,hello";

    print(intVal);
    print(floatVal);
    print(strVal);

    return 0;
}

