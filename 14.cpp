#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Function to input time
    void getTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    // Display time
    void displayTime() {
        cout << hours << " hrs " << minutes << " min " << seconds << " sec" << endl;
    }

    // Overload '>' operator to compare two times
    bool operator > (Time t) {
        if (hours > t.hours)
            return true;
        else if (hours == t.hours && minutes > t.minutes)
            return true;
        else if (hours == t.hours && minutes == t.minutes && seconds > t.seconds)
            return true;
        else
            return false;
    }
};

int main() {
    Time t1, t2;

    cout << "Enter first time:\n";
    t1.getTime();

    cout << "\nEnter second time:\n";
    t2.getTime();

    cout << "\nFirst Time: ";
    t1.displayTime();

    cout << "Second Time: ";
    t2.displayTime();

    if (t1 > t2)
        cout << "\nFirst time is greater than second time.\n";
    else
        cout << "\nSecond time is greater than or equal to first time.\n";

    return 0;
}
