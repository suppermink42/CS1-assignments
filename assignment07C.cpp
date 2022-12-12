#include <iostream> 
#include <fstream> 
#include <string>
using namespace std;

int main() {
    ifstream read;
    string line;
    int counter = 0;
    int lineCounter;
    char liney;
    string data;

    cout << "Enter File Name: " << endl;
    getline(cin, line);

    read.open(line);
    

    if(read.good()){
        while(getline(read, data)){
            cout << lineCounter <<": " << data << endl; //Has two different counters
            lineCounter++; //For the numbers
            counter++;    //For the lines
            if(counter == 26){
                cout << "Press ENTER to continue" << endl; 
                cin.get();
                counter = 0;
            }
        }
        
    }
    else{
        cout << "Failure" << endl;
    }
    
}

