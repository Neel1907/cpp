#include <iostream>
using namespace std;
int main() 
{
    float costPrice, sellingPrice, profitOrLoss;

    cout << "Enter the cost price of the item: ";
    cin >> costPrice;
    cout << "Enter the selling price of the item: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        cout << "The seller made a profit of " << profitOrLoss << endl;
    } else if (sellingPrice < costPrice) {
        profitOrLoss = costPrice - sellingPrice;
        cout << "The seller incurred a loss of " << profitOrLoss << endl;
    } else {
        cout << "The seller neither made a profit nor incurred a loss.The cost price and selling price are equal." << endl;
    }

    return 0;
}

