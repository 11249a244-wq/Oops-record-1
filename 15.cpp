#include <iostream>
using namespace std;

class Student {
private:
    string name;
    float height; // height in centimeters

public:
    // Function to input student details
    void getData() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter height (in cm): ";
        cin >> height;
    }

    // Function to display student details
    void displayData() {
        cout << "Name: " << name << ", Height: " << height << " cm" << endl;
    }

    // Overload '>' operator to compare heights of two students
    bool operator > (Student s) {
        if (height > s.height)
            return true;
        else
            return false;
    }

    // Overload '<' operator for demonstration
    bool operator < (Student s) {
        return height < s.height;
    }

    // Overload '==' operator for equal height
    bool operator == (Student s) {
        return height == s.height;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details of first student:\n";
    s1.getData();

    cout << "\nEnter details of second student:\n";
    s2.getData();

    cout << "\n--- Student Details ---\n";
    cout << "First Student: ";
    s1.displayData();
    cout << "Second Student: ";
    s2.displayData();

    cout << "\n--- Height Comparison ---\n";
    if (s1 > s2)
        cout << s1_name << " is taller than " << s2_name << ".\n";
    else if (s1 < s2)
        cout << s2_name << " is taller than " << s1_name << ".\n";
    else
        cout << "Both students have the same height.\n";

    return 0;
}
