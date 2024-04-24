/*
CSC 134
M6Lab2 - Arrays, Vectors, and Linked Lists
David Plata Cruz
4/24/2024
*/

#include <iostream>
#include <vector>
using namespace std;

//3 examples - prototypes
void array_example();
void vector_example();
void linked_list();

int main()
{
    cout << "M6Lab2" << endl;

    array_example();
    vector_example();
    linked_list();

return 0;
}

//3 example - full functions
void array_example(){

    cout << "Example 1: Array" << endl;

    const int SIZE = 5; //abs max
    int max = 3; //current max
    int nums[SIZE] = {1, 2, 2, 0, 0};

    //add a fourth item
    nums[max] = 3;
    max = max + 1;

    // print each item
    for (int i = 0; i < max; i++){
        cout << nums[i] << ",";
    }
    cout << endl << endl;
}

void vector_example(){

    cout << "Example 2: Vector" << endl;

    // requires the #include <vector> command up top
    vector<int> nums; // an empty vector of integers

    //add itmes to the end
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    cout << "Vector contains " << nums.size() << " numbers" << endl;

    // index acces works like arrays
    for (int i=0; i < nums.size(); i++){
        cout << nums[i] << ",";
    }

    cout << endl << endl;

    // or use member acces
    for (int num: nums){
        cout << num << ",";
    }
    cout << endl << endl;

}





void linked_list(){
    cout << "Example 3: Linked List" << endl;
}