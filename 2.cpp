#include <iostream>
#include <string>
using namespace std;

// Define a class for Student
class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // Function to input student data
    void getData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore(); // clear input buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student data
    void displayData() const {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    int N;

    cout << "Enter number of students: ";
    cin >> N;

    // Create an array of Student objects
    Student students[N];

    cout << "\n--- Enter Student Details ---\n";
}