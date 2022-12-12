#include <iostream>
using namespace std;

struct movieData{
    string title;
    string director;
    int year;
    int time;
    int productionCost;
    int fiveYear;
};

void display(movieData);
int main(){
    movieData var1;
    movieData var2;

    var1 = {"Byllet Train", "Brad Pitt", 2018, 126, 3000, 123000}; //123,000-3,000 = 120000
    var2 = {"Smile", "Rose Cutter", 2022, 155, 300000, 5000};     //5,000-300,000 = -295,000

    display(var1);
    cout << "----------------------------------\n";
    display(var2);
    cout << "----------------------------------\n";


    int var1Profit = var1.fiveYear - var1.productionCost;
    int var2Profit = var2.fiveYear - var2.productionCost;

    if(var1Profit > 0){ //yes
        cout << "The movie made a profit! " << var1Profit <<" dollars\n" << endl;
    }
    else {
        cout << "The movie lost money!! \n" << abs(var1Profit) <<" dollars\n" << endl;
    }

    if(var2Profit > 0){ //no
        cout << "The movie made a profit! \n" << var2Profit <<" dollars\n" << endl;
    }
    else{
        cout << "The movie lost money!! " << abs(var2Profit) <<" dollars\n" << endl;
    }



}

void display(movieData receive){
    cout << "The movie title is: " << receive.title << "\n";
    cout << "The movie director is: " << receive.director << "\n";
    cout << "The movie year is: " << receive.year << "\n";
    cout << "The movie run time is: " << receive.time << "\n";
    cout << "The movie production cost is: " << receive.productionCost << "\n";
    cout << "The movie first five year budget is: " << receive.fiveYear << "\n";

    
}