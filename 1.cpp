#include <iostream>
#include <string>
using namespace std;

// Define a class for Student
class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Function to input student details
    void inputData() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }

    // Function to display student details
    void displayData() {
        cout << "\n--- Student Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

// Main function
int main() {
    // Create one object of Student class
    Student s1;

    // Input and display student information
    s1.inputData();
    s1.displayData();

    return 0;
}
