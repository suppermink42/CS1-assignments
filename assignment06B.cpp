#include <iostream>
using namespace std;

int main(){
    double dataSet[12];
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    double largest = 0;
    double smallest = 0;
    double total = 0;
    double average = 0;

    cout << "Enter Rainfall for 12 months" << endl;

    int i = 0;
    int small = 0;
    int big = 0;
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
            small = i;
        }
       

        largest = dataSet[0];    
        if(largest < dataSet[i]){
            largest = dataSet[i];
            big = i;
        }
       
    }
    average = total / 12;

    
    cout << "Total: " << total << endl; 
    cout << "Average: " << average << endl;
    cout << "Lowest is: " << smallest << " The month is " << months[small] << endl;
    cout << "Largest is: " << largest << " The month is " << months[big] << endl;

       
   }
    
