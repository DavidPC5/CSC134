/*
CSC 134
M3HW1 - Gold
David Plata Cruz
3/3/2024
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//create a conversation with a chat bot
// Q1 functions
void Answeryes();
void Answerno();
void Answer1();
void Answer2();

int main()
{
    //Question 1: Chat Bot
    cout << "Queston 1: Chat bot" << endl;

    //Delcare Variables
    int choice;

    //Ask the question
    cout << "Hello, I'm a new Chatbot!" << endl;
    cout << "Do you like the Dark souls series?" << endl;
    cout << "1 for yes, or 2 for no: ";
    cin >> choice;

    // create if statments
    if (1 == choice) {
        Answeryes();
        cout << "Do you like Dark souls 2?" << endl;
        cout << "1 for yes 2 for no: ";
        cin >> choice;
        if (1 == choice) {
            Answer1();
        }
        else if (2 == choice) {
            Answer2();
        }
    }
    else if (2 == choice) {
        Answerno();
    }
    else {
        cout << "Sorry, Its Ok if you are not sure" << endl;
    }





    //Question 2: Receipt calculator
    cout << "" << endl;
    cout << "Question 2: Receipt Calculator" << endl;


    string mealcost;
    cout << "How much will the meal be: $";
    cin >> mealcost;

    cout << "Thank you for dining with us" << endl;
    cout << "--------------------" << endl;
    

    // all in $, except the percent
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount = 0;
    double total = 0;

    // do calculations
    tax_amount = meal_price * tax_percent;
    total = meal_price + tax_amount;

    // print the receipt
    cout << fixed << setprecision(2);


    cout << "Value Meal"    << "\t$" << meal_price << endl;
    cout << "Tax"   << "\t\t$" << tax_amount << endl;
    cout << "--------------------" << endl;
    cout << "Total" << "\t\t$" <<  total << endl;




    return 0;
}

// enter functions and define for Q1
void Answeryes() {
cout << "You're very cool!" << endl;
}

void Answerno() {
cout << "That's not good but i hope you will learn to like good games." << endl;
}

void Answer1() {
cout << "Ok, nevermind then." << endl;
}
void Answer2() {
cout << "Oh, so you're actually smart!" << endl;
}