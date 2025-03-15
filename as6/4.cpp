#include <iostream>
#include <string>
using namespace std;
int max(int a, int b)
 {
    return (a > b) ? a : b;
}

float max(float a, float b) 
{
    return (a > b) ? a : b;
}
string max(const string& a, const string& b) 
{
    return (a > b) ? a : b;
}

int main() {
    int int1 = 20, int2 = 70;
    float float1 = 4.14f, float2 = 3.71f;
    string str1 = "apple", str2 = "banana";

    cout << "Max of " << int1 << " and " << int2 << " is: " << max(int1, int2) << endl;
	cout << "Max of " << float1 << " and " << float2 << " is: " << max(float1, float2) << endl;
    cout << "Max of \"" << str1 << "\" and \"" << str2 << "\" is: " << max(str1, str2) << endl;

    return 0;
}

