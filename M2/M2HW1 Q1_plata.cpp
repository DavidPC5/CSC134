/*
CSC 134
M2HW1 Q1 - GOLD
David Plata Cruz
2/17/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
cout << "Question 1" << endl << endl;

//Declare Variables
string name;
string ACNUM = "David Plata Cruz";
double SAB, AOD, AOW, FAB;
double AN = 247387;

//Ask user for stuff duh
cout << "Name? ";
cin >> name;
cout << "Starting Account Balance: $";
cin >> SAB;
cout << "Amount of Deposit: $";
cin >> AOD;
cout << "Amount of Withdrawl: $";
cin >> AOW;
cout << "" << endl;
//Do Calculations
FAB = (SAB + AOD) - AOW;

//Print output
cout << "Account Name: " << ACNUM << endl;
cout << "Account Number: " << AN << endl;
cout << "Final Account Balance: $" << FAB << endl << endl;

return 0;
}