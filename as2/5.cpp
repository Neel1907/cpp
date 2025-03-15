#include <iostream>
using namespace std;

int main()
 {
        
	double basicSalary, HRA, DA, grossSalary;
    cout << "Enter the basic salary of the employee: ";
    cin >> basicSalary;

        if (basicSalary < 1500) {
        HRA = 0.10 * basicSalary; 
        DA = 0.90 * basicSalary;  
    } else {
        HRA = 500;                
		DA = 0.98 * basicSalary;  
    }

    grossSalary = basicSalary + HRA + DA;

    cout << "The gross salary of the employee is: Rs. " << grossSalary << endl;

    return 0;
}

