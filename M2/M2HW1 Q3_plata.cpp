/*
CSC 134
M2HW1 Q3 - GOLD
David Plata Cruz
2/17/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Declare Variables
    double PO, SPP, V, PL;

    //Ask user input
    cout << "How many pizzas ordered? ";
    cin >> PO;
    cout << "How many slices per pizza? ";
    cin >> SPP;
    cout << "How many vistors are coming: ";
    cin >> V;

    //Do Calculations
    PL = (PO * SPP) - (V * 3);

    //Print output
    cout << "Everyone gets 3 slices of pizzas" << endl;
    cout << "There are " << PL << " pieces of pizza left." << endl << endl;

    return 0;
}