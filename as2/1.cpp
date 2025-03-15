#include <iostream>
using namespace std;
int main()
 {
    
    int quantity;
    double pricePerItem, totalExpense, discountedExpense;

    cout << "Enter the quantity of items: ";
    cin >> quantity;
    cout << "Enter the price per item: ";
    cin >> pricePerItem;

        totalExpense = quantity * pricePerItem;

    if (totalExpense > 5000) {
        discountedExpense = totalExpense - (totalExpense * 0.10); 
        cout << "Total expense after discount: " << discountedExpense << endl;
    } else {
        cout << "Total expense: " << totalExpense << endl;
    }

    return 0;
}

