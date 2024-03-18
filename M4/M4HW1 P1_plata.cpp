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
    cout << "M4HW1_plata part one"


    // declare variables
    int firstNum, secNum, answer;
    cout << "5 times table" << endl;

    //Do calcuations
    firstNum = 5;
    //secNum = 1;
    answer = firstNum * secNum;

for (int i = 1; i <= 12; i++)
{
    answer = firstNum * i;
    cout << firstNum << " times " << i << " is " << answer << endl;
}

return 0;
}