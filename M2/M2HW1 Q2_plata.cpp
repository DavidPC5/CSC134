/*
CSC 134
M2HW1 Q2 - GOLD
David Plata Cruz
2/17/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "General Crates Pricing System" << endl;
    //Declare variables
    double length, width, height; //in feet
    double volume; //in cubic feet
    double cost, charge, profit; // in $

    //Declare constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.51;
   
    //Ask for user input
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    //Do calculations  
   volume = length * width * height;
   cost = volume * COST_PER_CUBIC_FOOT;
   charge = volume * CHARGE_PER_CUBIC_FOOT;
   profit = charge - cost;

    //print the answer
    cout << "The crates volume is: " << volume << " cubic feet" << endl;
    cout << fixed << setprecision(2);
    cout << "Cost to build it is: $" << cost << endl;
    cout << "Charge to customer is: $" << charge << endl;
    cout << "Our Profit: $" << profit << endl;
    
    return 0;
}