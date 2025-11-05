#include <iostream>
#include <string>
using namespace std;

class ElectricityBill {
private:
    string customerName;
    int customerID;
    double units;
    double totalBill;

public:
    // Function to input customer details
    void getDetails() {
        cout << "Enter Customer ID: ";
        cin >> customerID;
        cin.ignore(); // clear input buffer
        cout << "Enter Customer Name: ";
        getline(cin, customerName);
        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    // Function to calculate total bill
    void calculateBill() {
        if (units <= 100)
            totalBill = units * 1.20;                // ₹1.20 per unit
        else if (units <= 200)
            totalBill = 100 * 1.20 + (units - 100) * 2.00; // ₹2.00 per unit after 100
        else if (units <= 300)
            totalBill = 100 * 1.20 + 100 * 2.00 + (units - 200) * 3.00; // ₹3.00 per unit after 200
        else
            totalBill = 100 * 1.20 + 100 * 2.00 + 100 * 3.00 + (units - 300) * 5.00; // ₹5.00 after 300
    }

    // Function to display the bill
    void displayBill() {
        cout << "\n----- Electricity Bill -----" << endl;
        cout << "Customer ID   : " << customerID << endl;
        cout << "Customer Name : " << customerName << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Amount  : ₹" << totalBill << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    ElectricityBill bill;
    bill.getDetails();
    bill.calculateBill();
    bill.displayBill();

    return 0;
}
