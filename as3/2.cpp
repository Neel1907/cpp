#include <iostream>
using namespace std;
int main() 
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n<2)
	 {
        cout << "Array must have at least two elements to swap." << endl;
        return 0;
    }

    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) <<endl;
        cin >> arr[i];
    }

    int temp = arr[0];
    arr[0] = arr[n - 1];
    arr[n - 1] = temp;

    cout << "Array after swapping first and last elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<endl;
    }
    cout << endl;

    return 0;
}

