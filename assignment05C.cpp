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


int findLowest(int &score1A, int &score1B, int &score1C, int &score1D, int &score1E) {
    if (score1A < score1B && score1A < score1C && score1A < score1D && score1A < score1E) {
        score1A = 0;
    }
    else if (score1B < score1A && score1B < score1C && score1B < score1D && score1B < score1E) {
        score1B = 0;
    }
    else if (score1C < score1A && score1C < score1B && score1C < score1D && score1C < score1E) {
        score1C = 0;
    }
    else if (score1D < score1A && score1D < score1B && score1D < score1C && score1D < score1E) {
        score1D = 0;

    }
    else if (score1E < score1A && score1E < score1B && score1E < score1C && score1E < score1D) {
        score1E = 0;
    }
    return 0;
};
