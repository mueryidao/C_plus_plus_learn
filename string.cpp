#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string str("This is a string type variable.");

    cout << "Hello World!" << endl;
    cout << str << endl;

    string mystr;
    float price=0;
    int quantity=0;

    cout << "Enter price: ";
    getline(cin, mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline(cin, mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << endl;

    return 0;

    return 0;
}
