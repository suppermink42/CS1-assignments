#include <iostream>
using namespace std;

int main(){
    string salsa[] = {"mild", "meduim", "sweet", "hot", "zesty"};
    int soldJars[5];
    int ammount = 0;
    int total = 0;
    int largest = 0;
    int smallest = 0;
    //int counter = 0;
    int val = 0;

    string menu = "Enter ammount of jars sold for: ";

   
   for(int counter = 0; counter < 5; counter++) {
        cout << menu << " " << salsa[counter] << endl;
        cin >> ammount;

        
        while(ammount <= 0){
            cout << "No negative values" << endl;
            cin >> ammount;
        }

        soldJars[counter] = ammount;

        

       
        total = total + soldJars[counter]; 

        smallest = soldJars[0];    
        if(smallest > soldJars[counter]){
            smallest = soldJars[counter];
        }


     
        largest = soldJars[0];    
        if(largest < soldJars[counter]){
            largest = soldJars[counter];
        }
    
    }

    for(int i = 0; i < 5; i++){
        cout << salsa[i] << ":  " << soldJars[i] << endl;
    }

    cout << "Total Sales " << total << endl;
    cout << "Smallest Salsa Value " << smallest << endl;
    cout << "Largest Salsa Value " << largest << endl;
}

