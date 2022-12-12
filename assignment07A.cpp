#include <iostream> 
#include <fstream> 
#include <string>
using namespace std;

int main() {
    ifstream read;
    string line;
    int counter = 0;
    string data;

    cout << "Enter File Name: " << endl; 
    getline(cin, line);

    read.open(line);
    

    if(read.good()){ //Continue if file good
        while(getline(read, data)){ //Until file is over
            cout << data << endl;
            counter++;
            if (counter == 10) {
                break; // End execution
            }
        }
        if(counter <= 10 && read.eof()){ //If smaller than 10 lines
            cout << "This file has been read" << endl;
        }
    }
    else{
        cout << "Failure" << endl;
    }
    
}

