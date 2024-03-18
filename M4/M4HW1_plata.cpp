/*
CSC 134
M4HW1 - gold
David Plata Cruz
3/17/2024
*/

#include <iostream>
using namespace std;

int main()
{
    int number, multiplier, sum;
    cout << "Enter a number: ";
    cin >> number;

for (multiplier = 1; multiplier <= 10; multiplier++)
{
    sum = number * multiplier;
    cout << number << " * " << multiplier << " = " << sum << endl;
}




return 0;
}