#include <iostream>
using namespace std;

struct weather
{
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

void inputC(weather&);

int main()
{
    weather weatherFinal[12];
    for (int i = 0; i < 12; i++)
    {
        inputC(weatherFinal[i]);
    }

    for(int i = 0; i < 12; i++){
        cout << "The total rainfall for the month " << weatherFinal[i].totalRainfall << "\n";
        cout << "The average temperature for the month: " << weatherFinal[i].averageTemperature << "\n";
        cout << "----------------------------------------------------\n";

    }

    double smallest;
    double largest;
    smallest = weatherFinal[0].averageTemperature;
    largest = weatherFinal[0].averageTemperature;

    for(int i = 0; i < 12; i++){
        if (smallest > weatherFinal[i].averageTemperature){
            smallest = weatherFinal[i].averageTemperature;
        }
    }
    cout << "The smallest temperature for the year is " << smallest << "\n";

     for(int i = 0; i < 12; i++){
        if (largest < weatherFinal[i].averageTemperature){
            largest = weatherFinal[i].averageTemperature;
        }
    }
    cout << "The largest temperature for the year is " << largest << "\n";
   
   
   int average = 0;
    for(int i = 0; i < 12; i++){
        
        average += weatherFinal[i].averageTemperature;
        
    }
    average = average/2;
    cout << "The average of all monthly rainfall is: " << average << "\n";

    
}


void inputC(weather& in)
{
    cout << "Enter the amount of rainfall\n";
    cin >> in.totalRainfall;
    cout << "Enter the hightest temperature\n";
    cin >> in.highTemperature;

    while (in.highTemperature < -100 || in.highTemperature > 140)
    {
        cout << "Temp needs to between -100 degrees and 140 degrees\n";
        cin >> in.highTemperature;
    }

    cout << "Enter the lowest temperature\n";
    cin >> in.lowTemperature;
    
    while(in.lowTemperature < -100 || in.lowTemperature > 140)
    {
        cout << "Temp needs to between -100 degrees and 140 degrees\n";
        cin >> in.lowTemperature;
    }
    cout << "----------------------------------------------------\n";
    in.averageTemperature = (in.totalRainfall + in.highTemperature) / 2;

    // cout << "Average temperature is " << avgTemp << "\n";
};

