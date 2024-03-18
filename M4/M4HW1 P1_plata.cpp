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

    int firstNum = 5, secNum = 1, answer; 
    cout << "5 times table" << endl;

while (secNum <= 12)
{
    answer = firstNum * secNum;
    cout << firstNum << " times " << secNum << " is " << answer << endl;
    secNum++;
}

return 0;
}