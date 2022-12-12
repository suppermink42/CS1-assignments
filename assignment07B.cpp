#include <iostream> 
#include <fstream> 
#include <string>
using namespace std;

int main(){
    ifstream read;
    string line;
    char liney;
    int counter = 0;
    string data;

    cout << "Enter File Name: " << endl;
    getline(cin, line); 

    read.open(line);
    

    if(read.good()){
        while(getline(read, data)){ //To ask for the data
            cout << data << endl;
            counter++;
            if(counter == 24){ //To ask and reset
                cout << "Press any key to continue" << endl;
                cin >> liney;
                counter = 0;
            }
        }
    }
    else{
        cout << "Failure to open file" << endl;
    }
    
}

