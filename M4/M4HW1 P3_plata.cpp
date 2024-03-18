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
    cout << "M4HW1_plata part two" << endl;

    int firstNum, secNum, answer;
    cout << "Enter a number from 1 to 12: ";
    cin >> firstNum;

    for (secNum = 1; secNum <= 12; secNum++)
    {
        answer = firstNum * secNum;
        cout << firstNum << " * " << secNum << " = " << answer << endl;

    }

return 0;
}