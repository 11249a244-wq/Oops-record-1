#include <iostream>
using namespace std;

class MyString {
private:
    string str;

public:
    // Constructor
    MyString(string s = "") {
        str = s;
    }

    // Function to display string
    void display() {
        cout << str << endl;
    }

    // Overload '+' operator to concatenate two MyString objects
    MyString operator+(MyString s) {
        MyString temp;
        temp.str = str + s.str;
        return temp;
    }
};

int main() {
    string input1, input2;

    cout << "Enter first string: ";
    cin >> input1;

    cout << "Enter second string: ";
    cin >> input2;

    MyString s1(input1);
    MyString s2(input2);
    MyString s3;

    // Concatenate using overloaded '+'
    s3 = s1 + s2;

    cout << "\nFirst String: ";
    s1.display();

    cout << "Second String: ";
    s2.display();

    cout << "\nConcatenated String: ";
    s3.display();

    return 0;
}
