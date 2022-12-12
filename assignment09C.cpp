#include <iostream>
using namespace std;

struct weather
{
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

void inputC(weather);
void display(weather);

int main()
{
    weather weatherFinal[2];
    for (int i = 0; i < 2; i++)
    {
        inputC(weatherFinal[i]);
    }

    for (int i = 0; i < 12; i++)
    {
        cout << (weatherFinal[i].averageTemperature);
        
    }
}


void inputC(weather in)
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
    
    while (in.lowTemperature < -100 || in.lowTemperature > 140)
    {
        cout << "Temp needs to between -100 degrees and 140 degrees\n";
        cin >> in.lowTemperature;
    }
    cout << "----------------------------------------------------\n";
    in.averageTemperature = (in.totalRainfall + in.highTemperature) / 2;

    // cout << "Average temperature is " << avgTemp << "\n";
};

void display(weather in1)
{
    cout << in1.averageTemperature;
};