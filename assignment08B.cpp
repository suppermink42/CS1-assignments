#include <iostream>
//#include <string>
using namespace std;


int main(){
    string word;
    string word2;
    int total;
    
    cout << "Enter two words" << endl;
    
    getline(cin,word);
    getline(cin,word2);

    cout << "Whole first word is " << word << endl;
    cout << "Whole second word is " << word2 << endl;

    cout << "First Word Upper Case: " << endl;
    for(char& c : word){
        c = toupper(c);
    }
    cout << word << "\n";

    //Sec Done
    cout << "Second Word Upper Case: " << endl;
    for(char& c : word2){
        c = toupper(c);
    }
    cout << word2 << "\n";

    cout << "First Lower Case Word " << endl;;
    for(char& c : word){
        c = tolower(c);
    }
    cout << word << "\n";

    //Sec Done2
    cout << "Second Lower Case Word" << endl;;
   for(char& c : word2){
        c = tolower(c);
    }
    cout << word2 << "\n";
    

    

    int wordF = word.length();
    int wordF2 = word2.length();
    cout << "The total number of characters in the word: " << wordF <<" and in the second word "<< wordF2 << endl;  

    cout << "The first character in the first word: " << word[0] << endl;
    cout << "The first character in the second word: " << word2[0] << endl;

        
    cout << "The last character in the word: " << word[wordF - 1] << endl;
    cout << "The last character in the word: " << word2[wordF2 - 1] << endl;

    cout << "--------------------------------------------------\n";
    
    if(word == word2){
        cout << "The words are the same \n";
    }
    else{
        cout << "The words are not the same\n";
    }
    

    if(word > word2){
        cout << "Alphabetically printed\n";
        cout << word2 << "\n";
        cout << word << "\n";
    }
    else{
        cout << "Alphabetically printed\n";
        cout << word << "\n";
        cout << word2 << "\n";
    }
    
    
}