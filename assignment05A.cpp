#include <iostream>
using namespace std;

double getLength(double);
double getWidth(double);
double getArea(double,double);
double displayData(double, double, double);
int main(){
    double length = getLength(0);
    double width = getWidth(0);
    double area  = getArea(length, width);
    cout << displayData(length, width, area) << endl;

}

double getLength(double length1){
    cout << "What is your length" << endl;
    cin >> length1;
    return length1; 
    //return 0; 
};

double getWidth(double width1){
    cout << "What is your width" << endl;
    cin >> width1;
    return width1;
    //return 0; 
};
<<<<<<< HEAD
double 
=======

>>>>>>> ddc451acc12ec8d45ce569dc9fb74b9df6e37cc7
double getArea(double length1B, double width1B){
    double finalArea = 0;
    finalArea = length1B * width1B;
    return finalArea;
};

double displayData(double length1C, double width1C, double area1){
    cout << "Length is: " << length1C << endl;
    cout << "Width is: " << width1C << endl;
    cout << "Area is: " << area1 << endl;
    return 0;
}