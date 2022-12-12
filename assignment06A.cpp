#include <iostream>
using namespace std;

int main(){
    int dataSet[10];
    int largest = 0;
    int smallest = 0;

    cout << "Enter any 10 integers" << endl;

    for(int i = 0; i < 10; i++){
        cin >> dataSet[i];
    }


    for(int i = 0; i < 10; i++){
        smallest = dataSet[0];    
        if(smallest > dataSet[i]){
            smallest = dataSet[i];
        }
    }
    cout << "The Smallest value is " << smallest << endl;

    for(int i = 0; i < 10; i++){
        largest = dataSet[0];    
        if(largest < dataSet[i]){
            largest = dataSet[i];
        }
    }
    cout << "The Largest value is " << largest << endl;

} 
