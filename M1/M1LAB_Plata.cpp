//CSC 134
//M1LAB - Apple Sales
//David Plta Cruz
//1/24/24

#include <iostream>
using namespace std;
int main() {
    cout << "M1Lab - Apple Sales" << endl;
    //Simulate selling apples
    //Set up variables (nouns)
    string name = "David";
    int num_apples = 20;
    double price_per_apple = 0.25;

    //Do the calculations
    double total_price = 0;
    //NOTE: math operations are + - * /
    total_price = num_apples * price_per_apple;

    //Print the output
    cout << "Welcome to " << name << "'s Apple Orchard" << endl;
    cout << "We have " << num_apples << " apples for sale." << endl;
    cout << "At a cost of $" << price_per_apple << " each." << endl;
    cout << "For a total cost of $" << total_price << endl;
    // TODO: Make prices look "Correct" ($25.00)

    return 0;
}