#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int SIZE = 280;

int main(){
    char word[SIZE];
    char word2[SIZE];
    int total;
    
    cout << "Enter two words" << endl;
    
    cin.getline(word,SIZE);
    cin.getline(word2,SIZE);

    cout << "Whole first word is " << word << endl;
    cout << "Whole second word is " << word2 << endl;

    cout << "First Word Upper Case: " << endl;
    for(int i = 0; i < strlen(word); i++){
        cout << (char)toupper(word[i]);
    }   
    cout << endl;

    //Sec
    cout << "Second Word Upper Case: " << endl;
    for(int i = 0; i < strlen(word2); i++){
        cout << (char)toupper(word2[i]);
    }   
    cout << endl;

    cout << "First Lower Case Word " << endl;;
    for(int i = 0; i < strlen(word); i++){
        cout << (char)tolower(word[i]);
    }  
    cout << endl;

    //Sec
    cout << "Second Lower Case Word" << endl;;
    for(int i = 0; i < strlen(word2); i++){
        cout << (char)tolower(word2[i]);
    }  
    cout << endl;
    

    /*for(int i = 0; i < strlen(word); i++){
            total++;   
    }
    */

    int wordF = strlen(word);
    int wordF2 = strlen(word2);
    cout << "The total number of characters in the word: " << wordF <<" and in the second word "<< wordF2 << endl;  

    cout << "The first character in the first word: " << word[0] << endl;
    cout << "The first character in the second word: " << word2[0] << endl;

        
    cout << "The last character in the word: " << word[wordF - 1] << endl;
    cout << "The last character in the word: " << word2[wordF2 - 1] << endl;

    cout << "--------------------------------------------------\n";

    if(strcmp(word,word2) == 0){
        cout << "The words are the same \n";
    }
    else{
        cout << "The words are not the same\n";
    }

    //sort(word, sizeof(word) / sizeof(char));

    
}
