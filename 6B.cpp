#include <iostream>
#include <vector>
#define max 12
using namespace std;


int main(){
<<<<<<< HEAD
<<<<<<< HEAD
    double dataSet[max];  
    double counter = 0;
=======
    int dataSet[max];  
    int counter = 0;
>>>>>>> ddc451acc12ec8d45ce569dc9fb74b9df6e37cc7
=======
    int dataSet[max];  
    int counter = 0;
>>>>>>> ddc451acc12ec8d45ce569dc9fb74b9df6e37cc7
    int val = 0;
    
    while(counter < 12){ 
        cout << "Enter Value" << endl;

        cin >> val;
        if (val < 0){
            cout << "Not negative numbers" << endl;

        }
        else{
          dataSet[counter] = val;
          counter++;

        }       

    }
   
    
}
