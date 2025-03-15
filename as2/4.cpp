#include <iostream>
using namespace std;
int main() 
{
    int ramAge, sulabhAge, ajayAge;

    cout << "Enter the age of Ram: ";
    cin >> ramAge;

    cout << "Enter the age of Sulabh: ";
    cin >> sulabhAge;

    cout << "Enter the age of Ajay: ";
    cin >> ajayAge;

    if (ramAge < sulabhAge && ramAge < ajayAge) {
        cout << "Ram is the youngest."<< endl;
    }
    else if (sulabhAge < ramAge && sulabhAge < ajayAge) {
        cout << "Sulabh is the youngest." << endl;
    }
    else if (ajayAge < ramAge && ajayAge < sulabhAge) {
        cout << "Ajay is the youngest." << endl;
    }
    else {
        cout << "There is a tie for the youngest age." << endl;
    }

    return 0;
}

