#include <iostream>
using namespace std;

class book
{
    private:
    char ISBNO[50],Book_Name[50],Author[50];
    int pages,ACCNO;
    float price;
    public:
    void getdetails()
    {
        cout<<"enter ISBNO";
        cin>>ISBNO;
        cout<<"enter book name:";
        cin>>Book_Name;
        cout<< "Enter no.of pages:";
        cin>> pages;
        cout<<"Enter ACCNO:";
        cin>> ACCNO;
        cout<<"Enter price:";
        cin>> price;
    }
    void display()
    {
        cout << "ISBNO:"<< ISBNO << endl;
        cout << "Book_Name" << Book_Name << endl;
        cout << "pages"<< pages << endl;
        cout << "ACCNO:" << ACCNO << endl;
        cout << "Author Name:"<< Author << endl;
        cout << "price:"<< price << endl;
    }
};
int main()
{
   book b;
   b.getdetails();
   b.display(); 
   return 0;   
}