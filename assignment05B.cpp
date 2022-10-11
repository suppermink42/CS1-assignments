#include <iostream>
using namespace std;

double fallingDistance(double);
int main(){
    for(int i = 0; i < 11; i++){
        int display = fallingDistance(i);
        cout << "The object falling for " << i << " time is " << display << " distance " << endl;
    }
}

double fallingDistance(double time1){
    int distance1 = 0.5 * 9.8 * time1 * time1;
    return distance1;
}