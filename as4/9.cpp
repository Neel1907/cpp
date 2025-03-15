#include <iostream>
using namespace std;
class Date
 {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    friend void printDate(Date d);
};

void printDate(Date d) {
    cout << "Date: " << d.day << "-" << d.month << "-" << d.year << endl;
}

int main() {
    Date date1(5, 3, 2025);
	 printDate(date1);

    return 0;
}

