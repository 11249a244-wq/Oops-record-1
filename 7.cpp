#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
   
    void getTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }
    void displayTime() {
        cout << hours << " hrs " << minutes << " min " << seconds << " sec" << endl;
    }
    void addTime(Time t1, Time t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + (seconds / 60);
        hours = t1.hours + t2.hours + (minutes / 60);
        seconds = seconds % 60;
        minutes = minutes % 60;
    }
};

int main() {
    Time t1, t2, t3;
    cout << "Enter first time:\n";
    t1.getTime();
    cout << "\nEnter second time:\n";
    t2.getTime();
    t3.addTime(t1, t2);
    cout << "\nFirst Time: ";
    t1.displayTime();
    cout << "Second Time: ";
    t2.displayTime();
    cout << "\nSum of two times: ";
    t3.displayTime();
    return 0;
}
