#include <iostream>
using namespace std;

class Demo {
private:
    int number;

public:
    // Constructor
    Demo(int n) {
        number = n;
        cout << "Constructor called! Object created with number = " << number << endl;
    }

    // Member function
    void display() {
        cout << "Number = " << number << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called! Object with number = " << number << " is destroyed." << endl;
    }
};

int main() {
    cout << "Creating first object..." << endl;
    Demo obj1(10);

    cout << "\nCreating second object..." << endl;
    Demo obj2(20);

    cout << "\nDisplaying object details:\n";
    obj1.display();
    obj2.display();

    cout << "\nEnd of main function. Objects will now be destroyed automatically.\n";

    return 0;
}
