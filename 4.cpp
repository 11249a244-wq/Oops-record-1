#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    string author;
    float price;

public:
   
    void getDetails() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, title);
        cout << "Enter Author Name: ";
        getline(cin, author);
        cout << "Enter Book Price: ";
        cin >> price;
        cout << endl;
    }

    
    void displayDetails() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    int n;

    cout << "Enter the number of books: ";
    cin >> n;

    
    Book library[n];

    cout << "\n--- Enter Book Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << ":\n";
        library[i].getDetails();
    }

    cout << "\n--- Library Book Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nBook " << i + 1 << " Details:\n";
        library[i].displayDetails();
    }

    return 0;
}
