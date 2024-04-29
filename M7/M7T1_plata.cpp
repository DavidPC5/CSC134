//CSCS 134
//M7T1 - Restaurant Rating 
//David Plata Cruz
//4/29/24

#include <iostream>
using namespace std;

//Use Restaurant class to store user ratings
//Next time we'll put the class in a separate file
class Restaurant {
    private:
    string name;  // the name
    double rating;  // 0 to 5 stars

    public:
    //constructor
    Restaurant(string n, double r){                          
        name = n;
        rating = r;
    }

    //getters and setters
    void setName(string n){
        name = n;
    }
    void setRating(double r){
        rating = r;
    }
    string getName() const{
        return name;
    }
    double getRating() const{
        return rating;
    }
    // print a formatted entry
    void printInfo(){
        cout << "Name: " << name << endl;
        cout << "Rating: " << rating << endl;
    }

};

int main(){
    cout << "M7T1 - Restaurant Reviews" << endl;

    //create a restaurant 
    cout << "Review info" << endl;
    cout << "-----------------" << endl;
    cout << "Breakfeast" << endl;
    Restaurant breakfeast_place = Restaurant("Mcdonald's", 2.3);
    //the constructor saves us from having to use 3 lines to set up
    //Restaurant lunch_place;
    //lunch_place.setName("Place");
    //lunch_place.setRating(3.0);
    breakfeast_place.printInfo(); //printInfo() saves me typing all the cout code every time
    cout << "-----------------" << endl;
    
    cout << "Lunch" << endl;;
    Restaurant lunch_place = Restaurant("Mi Casita", 4.5);
    cout << "Name: " << lunch_place.getName() << endl;
    cout << "Rating: " << lunch_place.getRating() << endl;
    cout << "-----------------" << endl;


    
    return 0;
}
