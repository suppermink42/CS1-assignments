#include <iostream>
using namespace std;

void getScore(int&);
void calcAverage(int&, int&, int&, int&, int&);
int findLowest(int&, int&, int&, int&, int&);
int main() {
    int scoreA;
    int scoreB;
    int scoreC;
    int scoreD;
    int scoreE;

    getScore(scoreA);
    getScore(scoreB);
    getScore(scoreC);
    getScore(scoreD);
    getScore(scoreE);

    findLowest(scoreA, scoreB, scoreC, scoreD, scoreE);
    
    calcAverage(scoreA, scoreB, scoreC, scoreD, scoreE);

    system("pause");
}

void getScore(int& score) {
    cout << "What is your score: " << endl;
    cin >> score;
    while (score < 0 || score > 100) {
        cout << "Score between 1 - 100!" << endl;
        cin >> score;
    }
};

void calcAverage(int& score1, int& score2, int& score3, int& score4, int& score5) {
    double finalAvg = score1 + score2 + score3 + score4 + score5;
    double finalFinal = finalAvg / 4;
    cout << "The final average with the lowest score dropped: " << finalFinal << endl;
};


int findLowest(int &score1A, int &score1B, int &score1C, int &score1D, int &score1E){
    int input[] = {score1A,score1B,score1C,score1D,score1E};
    
    int low = input[0];
    int index = 0;

    for(int i = 0; i < 5; i++){
        if (low > input[i]){
            low = input[i];
            index = i;           
        }
                
    }


    if (input[index] == input[0]){
        score1A = 0;
    }
    else if(input[index] == input[1]){
        score1B = 0;
    }
    else if(input[index] == input[2]){
        score1C = 0;
    }
    else if(input[index] == input[3]){
        score1D = 0;
    }
    else if(input[index] == input[4]){
        score1E = 0;
    }
    return 0;
};
