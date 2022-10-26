#include <iostream>
#include <vector>
#define max 12
using namespace std;


int main(){
    int dataSet[max];  
    int counter = 0;
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
