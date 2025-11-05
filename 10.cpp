#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    float basicSalary;
    float hra, da, grossSalary;

public:
    // Function to input employee details
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore(); // clear buffer
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Function to calculate salary
    void calculateSalary() {
        hra = 0.20 * basicSalary;  // 20% of basic
        da  = 0.10 * basicSalary;  // 10% of basic
        grossSalary = basicSalary + hra + da;
    }

    // Function to display payroll details
    void displayPayroll() const {
        cout << "\n---------------------------------";
        cout << "\n        Employee Payroll";
        cout << "\n---------------------------------";
        cout << "\nEmployee ID     : " << empID;
        cout << "\nEmployee Name   : " << name;
        cout << "\nBasic Salary    : " << basicSalary;
        cout << "\nHRA (20%)       : " << hra;
        cout << "\nDA (10%)        : " << da;
        cout << "\n---------------------------------";
        cout << "\nGross Salary    : " << grossSalary;
        cout << "\n---------------------------------\n";
    }
};

// Main function
int main() {
    Employee emp;

    cout << "--- Enter Employee Details ---" << endl;
    emp.getDetails();
    emp.calculateSalary();

    cout << "\n--- Generated Employee Payroll ---" << endl;
    emp.displayPayroll();

    return 0;
}
