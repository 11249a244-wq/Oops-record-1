#include <iostream>
using namespace std;

// Inline function definition
inline int add(int a, int b) {
    return a + b;
}

inline int multiply(int a, int b) {
    return a * b;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "\n--- Using Inline Functions ---" << endl;
    cout << "Addition = " << add(x, y) << endl;
    cout << "Multiplication = " << multiply(x, y) << endl;

    return 0;
}
