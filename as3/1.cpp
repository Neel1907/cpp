#include <iostream>
using namespace std;
int main()
 {
    int n;
    
    cout << "Enter the number of elements in the array: "<<endl;
    cin >> n;

    int arr[n];
    int sum = 0;
    float average;

      cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) <<endl;
        cin >> arr[i];
        sum += arr[i]; 
    }
    average = static_cast<float>(sum);

    cout << "Sum of the array elements: " << sum << endl;
    cout << "Average of the array elements: " << average << endl;

    return 0;
}

