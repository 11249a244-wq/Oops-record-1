#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) {
        value = v;
    }

    void display() {
        cout << "Value = " << value << endl;
    }

    Counter operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    Counter operator--() {
        --value;
        return *this;
    }

    Counter operator--(int) {
        Counter temp = *this;
        value--;
        return temp;
    }
};

int main() {
    Counter c1(5);

    cout << "Initial value:\n";
    c1.display();

    cout << "\nAfter prefix increment (++c1):\n";
    ++c1;
    c1.display();

    cout << "\nAfter postfix increment (c1++):\n";
    c1++;
    c1.display();

    cout << "\nAfter prefix decrement (--c1):\n";
    --c1;
    c1.display();

    cout << "\nAfter postfix decrement (c1--):\n";
    c1--;
    c1.display();

    return 0;
}
