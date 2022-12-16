#include <iostream>
#include <string>
using namespace std;

int main(){
    string word = "hello";

    for(char& c : word){
        c = toupper(c);
    }
    cout << word << "\n";
}