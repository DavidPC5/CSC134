//CSC 134
//M2T2 - Apple Orchard Part 2
//David Plta Cruz
//1/31/24

#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
  // Delcare variables
    string name;
    int apples;
    double price_each;
    double total;
      // Ask user for information
    cout << "Hi, what's your name? ";
    cin >> name;
    cout << "Welcome to " << name << "'s Apple Orchard" << endl;
    // Ask how many apples they want
    cout << "How many apples do you want? ";
    cin >> apples;
    //Ask the price for each
    cout << "How much are they each? $";
    cin >> price_each;

    //Do the calculations
    total = apples * price_each;

    //Print the output
    //Print number of apples, price each
    cout << "You ordered " << apples << " apples." << endl;
    cout << "At a cost of $" << price_each << " each." << endl;
    cout << "For a total cost of $" << total << endl << endl;
    cout << "Here's your receipt" << endl << endl;
    cout << fixed << setprecision(2);

    //Make a receipt
    cout << "Thank you for buying from us!" << endl;
    cout << "--------------------" << endl;
    cout << apples << " Apples"   << "\t$" << total << endl;
    cout << "--------------------" << endl;
    cout << "Total" << "\t\t$" <<  total << endl;



    return 0;
}