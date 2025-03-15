#include <iostream>
#include <string>
using namespace std;
class Employee 
{
private:
    string name; 
    double salary;  

public:
   
    void inputData() {
        cout << "Enter name: ";
        getline(cin, name);  
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore();  
    }

    void displayData() const {
        cout << "Name: " << name << ", Salary: $" << salary << endl;
    }
};

int main() {
    int n;

    cout << "Enter the number of employees: ";
    cin >> n;
    cin.ignore();

    Employee* employees = new Employee[n];

  
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        employees[i].inputData();
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        employees[i].displayData();
    }

    delete[] employees;

    return 0;
}

