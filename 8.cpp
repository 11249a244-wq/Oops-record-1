#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    void getData() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    void displayData() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c1, Complex c2) {
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;
        return temp; 
    }
};

int main() {
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.getData();

    cout << "\nEnter second complex number:\n";
    c2.getData();

    c3 = c3.add(c1, c2);

    cout << "\nFirst Complex Number: ";
    c1.displayData();

    cout << "Second Complex Number: ";
    c2.displayData();

    cout << "\nSum of Two Complex Numbers: ";
    c3.displayData();

    return 0;
}
