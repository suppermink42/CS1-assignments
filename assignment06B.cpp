#include <iostream>
using namespace std;

int main(){
    double dataSet[12];
    double largest = 0;
    double smallest = 0;
    double total = 0;
    double average = 0;

    cout << "Enter Rainfall for 12 months" << endl;

    for(int i = 0; i < 12; i++){
       cin >> dataSet[i];
       while (dataSet[i] <= 0){
           cout << "cannot be negative value" << endl;
           cin >> dataSet[i];
           
       }
       total = total + dataSet[i];

       smallest = dataSet[0];    
        if(smallest > dataSet[i]){
            smallest = dataSet[i];
        }

        largest = dataSet[0];    
        if(largest < dataSet[i]){
            largest = dataSet[i];
        }

    }
    average = total / 12;

    cout << "Total: " << total << endl; 
    cout << "Average" << average << endl;
    cout << "Lowest is: " << smallest << endl;
    cout << "Largest is: " << largest << endl;
   
   }
    
