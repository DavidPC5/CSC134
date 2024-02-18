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
double SAB = 500, AOD = 100, AOW = 60, FAB;

//Ask user for stuff duh
cout << fixed << setprecision(2) << endl;
cout << "Name? ";
getline (cin, name);
cout << "Starting Account Balance: \t$" << SAB << endl;
cout << "Amount of Deposit: \t\t$" << AOD << endl;
cout << "Amount of Withdrawl: \t\t$" << AOW << endl;
cout << "" << endl;
//Do Calculations
FAB = (SAB + AOD) - AOW;

//Print output
cout << "Account Name: " << name << endl;
cout << "Account Number: 3242433" << endl;
cout << "Final Account Balance: \t\t$" << FAB << endl << endl;

return 0;
}