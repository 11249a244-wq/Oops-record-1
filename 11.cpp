#include <iostream>
using namespace std;

class Number {
private:
    int a, b;

public:
    // Constructor
    Number(int x, int y) {
        a = x;
        b = y;
    }

    // Display function
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }

    // Overloading unary minus (-) operator
    void operator - () {
        a = -a;
        b = -b;
    }
};

int main() {
    Number n1(10, -20);

    cout << "Before overloading:" << endl;
    n1.display();

    // Apply unary minus
    -n1;

    cout << "\nAfter applying unary minus operator:" << endl;
    n1.display();

    return 0;
}
