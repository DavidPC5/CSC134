/*
CSC 134
M6T1
David Plata Cruz
4/8/24
*/

#include <iostream>
using namespace std;

//function prototype (part 2 just cause part 1 was not needed)
void part2();

int main(){

    part2();

    return 0;
}


void part2(){

    cout << "Please enter the # of cars spotted for each day. " << endl;

    int total = 0;
    double average;
    const int SIZE = 5; //number of days

    //We can declare an array both ways as seen below
    int cars[SIZE] ={};// size explicit, each value is zero
    string days[] ={"Mon", "Tue", "Wed", "Thu", "Fri"}; //size is implied

    //ask user for data for each day
    for (int count = 0; count < SIZE; count++){
    cout << days[count] << " : ";
    cin >> cars[count];
    }

    //Now find the total
    for (int count = 0; count < SIZE; count++){
    total += cars[count]; // add in each day's worth of cars
    }
    average = (double) total / SIZE;
    cout << "Total = " << total << " and average = " << average << endl;
    
    //Finally, graph the data
    //Format:
    //Mon 5 ||||
    cout << "Histogram" << endl;
    cout << "_________________________________________" << endl;
    for (int i =0; i < SIZE; i++){
    cout << days[i] << "\t";
    cout << cars[i] << "\t";
    //print the bar graph, one "|" per car
    for (int j=0; j < cars[i]; j++){
    cout << "|";
    }
    cout << endl; // finish the line
    }
}