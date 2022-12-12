#include <iostream>
#include <cstring>
#include <string>
using namespace std;
const int SIZE = 280;

int main(){
    char word[SIZE];
    char word2[SIZE];
    int total;
    
    cout << "Enter two words" << endl;
    
    cin.getline(word,SIZE);
    cin.getline(word2,SIZE);

    cout << "Whole word is " << word << endl;
    
    cout << "First Word Upper Case: " << endl;
    for(int i = 0; i < strlen(word); i++){
        cout <<  (char)toupper(word[i]) << endl;
    }   
    cout << endl;

    cout << "First Lower Case Word " << endl;;
    for(int i = 0; i < strlen(word); i++){
        cout << (char)tolower(word[i]);
    }  
    cout << endl;

    for(int i = 0; i < strlen(word); i++){
            total++;   
    }  
    cout << "The total number of characters in the word: " << total - 1 << endl;  

    cout << "The first character in the word: " << word[0] << endl;

    int finalWord = strlen(word);
    cout << "The last character in the word: " << word[finalWord] << endl;

    int a = 2;
    if (a > 2){
        if (a > 3){

        }
    }
    
}
