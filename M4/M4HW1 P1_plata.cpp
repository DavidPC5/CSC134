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
    cout << "M4HW1_plata part one" << endl;


    // declare variables
    int firstNum, answer;
    cout << "5 times table" << endl;
    firstNum = 5;

for (int secNum = 1; secNum <= 12; secNum++)
{
    answer = firstNum * secNum;
    cout << firstNum << " times " << secNum << " is " << answer << endl;
}

return 0;
}