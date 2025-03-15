#include <iostream>
using namespace std;
int main() 
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << endl;
        cin >> arr[i];
    }

    int start = 0, end = n - 1;
    while (start < end) 
	{
    	int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout << "Array after reversing:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    cout << endl;

    return 0;
}

