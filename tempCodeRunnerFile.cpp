#include <iostream>
using namespace std;

struct movieData{
    string title;
    string director;
    int year;
    int time;
};

void display(movieData);
int main(){
    movieData var1;
    movieData var2;

    var1 = {"Byllet Train", "Brad Pitt", 2018, 126};
    var2 = {"Smile", "Rose Cutter", 2022, 155};

    display(var1);
    cout << "----------------------------------\n";
    display(var2);



}

void display(movieData receive){
    cout << "The movie title is: " << receive.title << "\n";
    cout << "The movie director is: " << receive.director << "\n";
    cout << "The movie year is: " << receive.year << "\n";
    cout << "The movie run time is: " << receive.time << "\n";

    
}