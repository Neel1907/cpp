#include <iostream>
#include <string>
using namespace std;
int add(int a, int b)
 {
    return a + b;
}
float add(float a, float b)
 {
    return a + b;
}

string add(string a, string b) 
 {
    return a + b;
}

int main() {
    int int1 = 9, int2 = 80;
    float float1 = 7.9, float2 = 5.4;
    string str1 = "Hello, ", str2 = "I M NEEL PATEL";

    cout << "Sum of integers: " << add(int1, int2) << endl;
    cout << "Sum of floats: " << add(float1, float2) << endl;
    cout << "Concatenated strings: " << add(str1, str2) << endl;

    return 0;
}

