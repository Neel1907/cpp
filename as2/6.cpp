#include <iostream>
using namespace std;
int main() 
{
    int numCalls;
    double totalBill;

       cout << "Enter the number of calls: ";
    cin >> numCalls;

        if (numCalls <= 100) {
        totalBill = 200;
    }
    
    else if (numCalls <= 150) {
        totalBill = 200 + (numCalls - 100) * 0.60;
    }
        else if (numCalls <= 200) {
        totalBill = 200 + 50 * 0.60 + (numCalls - 150) * 0.50;
    }
        else {
        totalBill = 200 + 50 * 0.60 + 50 * 0.50 + (numCalls - 200) * 0.40;
    }
    cout << "Total telephone bill: Rs. " << totalBill << endl;

    return 0;
}

