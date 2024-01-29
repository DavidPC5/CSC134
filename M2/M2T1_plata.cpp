//CSC 134
//M2T1 - Receipt
//David Plta Cruz
//1/29/24

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "M2T1" << endl;
    //set up variables
    string meal = "Value Meal ";
    // all in $, except the percent
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount = 9;
    double total = 0;

    // do calculations

    // print the receipt
    // TODO: make it line up, and fix deciamls
    cout << meal    << "\t$" << meal_price << endl;
    cout << "tax"   << "\t\t$" << tax_amount << endl;
    cout << "total" << "\t\t$" << total << endl;
    cout << meal_price * tax_amount << endl;

    return 0;
}