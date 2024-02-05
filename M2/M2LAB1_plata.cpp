//CSC 134
//M2Lab1 - Crate Sales
//David Plata Cruz
//2/5/24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Declare variables
    double length, width, height, volume;
    double cost, charge, profit;

    //Declare constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
   
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
    cout << "The volume is: " << volume << " cubic feet" << endl;
    cout << fixed << setprecision(2);
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    
    return 0;
}