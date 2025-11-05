#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Overload binary '+' operator to add two complex numbers
    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;

    float r1, i1, r2, i2;

    cout << "Enter first complex number:\n";
    cout << "Real part: ";
    cin >> r1;
    cout << "Imaginary part: ";
    cin >> i1;
    c1 = Complex(r1, i1);

    cout << "\nEnter second complex number:\n";
    cout << "Real part: ";
    cin >> r2;
    cout << "Imaginary part: ";
    cin >> i2;
    c2 = Complex(r2, i2);

    // Add two complex numbers using overloaded '+'
    c3 = c1 + c2;

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "\nSum of Two Complex Numbers: ";
    c3.display();

    return 0;
}
