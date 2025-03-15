#include <iostream>
using namespace std;
class Time 
{
private:
    int hours, minutes;

public:
    	Time(int h = 0, int m = 0) : hours(h), minutes(m) {}
		bool operator==(const Time& other) {
        return (hours == other.hours && minutes == other.minutes);
    }

    void display() const {
        cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
    }
};

int main() {
	
    Time t1(10, 30);
    Time t2(10, 30);
    Time t3(12, 45);

        if (t1 == t2) {
        cout << "t1 and t2 are the same time." << endl;
    } else {
        cout << "t1 and t2 are different times." << endl;
    }

    if (t1 == t3) {
        cout << "t1 and t3 are the same time." << endl;
    } else {
        cout << "t1 and t3 are different times." << endl;
    }

    return 0;
}

