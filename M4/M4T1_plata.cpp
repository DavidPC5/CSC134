/*
CSC 134
M4T1
David Plata Cruz
3/4/2024
*/

#include <iostream>
using namespace std;

int main()
{
    //Program 5-3

    //Variables
    int number = 5;
    int i = 0;

    //While loop
    while (i < number) //If this experssion is true
    {
        cout << "Hello\n"; // Then this will be outputted
        i = i + 1; //Adds 1 to i if the experssion is true
    }
    
    cout << "That's all!\n\n";





    //Program 5-6
    //Starting number to square
    //Maximum number to square
    const int MIN_NUMBER = 1, MAX_NUMBER = 10; 

    int num = MIN_NUMBER; //counter      //variable that is incremented or decremented each time a loop repeats

    cout << "Number Number Squared\n";
    cout << "________________________\n";

    while (num <= MAX_NUMBER) // If this experssion is true
    {
        cout << num << "\t\t" << (num * num) << "\n"; // the minimum # is displayed and it times itself till it reaches max # or 10,
        num = num + 1; // Increment the counter     // min # adds 1 each time 
    } 

    return 0;
}