#include <iostream>
using namespace std;
int main()
 {
    double marks[5], totalMarks = 0.0, percentage;
    string division;

    cout << "Enter the marks obtained in 5 subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) <<endl;
        cin >> marks[i];
        totalMarks += marks[i];
    }

    percentage = (totalMarks / 500) * 100;

    if (percentage >= 60) {
        division = "First Division";
    } 
	else if (percentage >= 50) {
        division = "Second Division";
    }
	 else if (percentage >= 40) {
        division = "Third Division";
    } 
	else {
        division = "Fail";
    }

    cout << "Total Marks: " << totalMarks << "/500" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Division: " << division << endl;

    return 0;
}

