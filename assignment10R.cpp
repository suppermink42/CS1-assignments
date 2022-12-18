#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

const int SIZE = 1;

struct inventory {
    char item[SIZE];
    int quantity;
    float cost;
    float costW;
};

void displayMenu();
int getChoice();
void displayAll();
void displayRecord();
void changeRecord();
void addRecord();
void report();
int initDataRead();
void getItem(inventory&);
void displayItem(const inventory);

int main() {
    int choice = 0;
    while (choice != 6) {
        displayMenu();
        choice = getChoice();

        switch (choice) {
        case 1: displayAll(); break;
        case 2: displayRecord(); break;
        case 3: changeRecord(); break;
        case 4: addRecord(); break;
        case 5: report(); break;
        }
    }
    return 0;
}

void displayMenu() {
    cout << "Choose an option:\n";
    cout << "1. Display all records\n";
    cout << "2. Display a specific record\n";
    cout << "3. Change a specific record\n";
    cout << "4. Add a new record\n";
    cout << "5. Generate a report\n";
    cout << "6. Quit\n";
}

int getChoice() {
    int choice;
    cin >> choice;
    while (choice < 1 || choice > 6) {
        cout << "Enter a choice between 1 and 6:\n";
        cin >> choice;
    }
    return choice;
}

int initDataRead() {
    inventory temp;
    ofstream out;
    ifstream in;

    in.open("data.txt");
    out.open("inventory.dat", ios::out | ios::binary);

    if (in && out) {
        in >> temp.item;
        while (!in.eof()) {
            in >> temp.quantity >> temp.costW >> temp.cost;
            out.write((char*)&temp, sizeof(temp));
        }
        in.close();
        out.close();
    }
    else {
        cout << "Error opening file\n";
        exit(EXIT_FAILURE);
    }
    return 0;
}

void displayAll() {
    inventory temp;
    ifstream in("inventory.dat", ios::binary);

    if (in) {
        in.read((char*)&temp, sizeof(temp));
        while (!in.eof()) {
            displayItem(temp);
            in.read((char*)&temp, sizeof(temp));
        }
        in.close();
    }
}

void displayRecord() {
    inventory temp;
    char toDisplay[SIZE];
    cout << "Enter the name of the record you would like to view:\n";
    cin >> toDisplay;
    ifstream in("inventory.dat", ios::binary);
    if (in) {
        in.read((char*)&temp, sizeof(temp));
        while (!in.eof()) {
            if (strcmp(temp.item, toDisplay) == 0) {
                displayItem(temp);
                break;
            }
            in.read((char*)&temp, sizeof(temp));
        }
        if (in.eof()) {
            cout << "Item not in file\n";
        }
        in.close();
    }
}

void changeRecord() {
    inventory temp;
    inventory newItem;
    long where;

    char oldItem[SIZE];
    cout << "Enter the name of the record you would like to change:\n";
    cin >> oldItem;

    getItem(newItem);

    fstream inOut("inventory.dat", ios::in | ios::out | ios::binary);

    if (inOut) {
        inOut.read((char*)&temp, sizeof(temp));
        while (!inOut.eof()) {
            if (strcmp(temp.item, oldItem) == 0) {
                cout << "Item found: " << temp.item << "\n";
                break;
            }
            inOut.read((char*)&temp, sizeof(temp));
        }
    }
    inOut.clear();

    where = inOut.tellg();
    inOut.seekp(where - sizeof(inventory), ios::beg);
    inOut.write((char*)&newItem, sizeof(newItem));
    inOut.close();
}

void addRecord() {
    inventory newItem;
    getItem(newItem);
    ofstream out("inventory.dat", ios::app | ios::binary);
    if (out) {
        out.write((char*)&newItem, sizeof(newItem));
        out.close();
    }
}

void report() {
    inventory temp;
    int totalQuantity = 0;
    float totalCost = 0;
    float totalValue = 0;
    ifstream in("inventory.dat", ios::binary);

    if (in) {
        in.read((char*)&temp, sizeof(temp));
        while (!in.eof()) {
            totalQuantity += temp.quantity;
            totalCost += temp.costW;
            totalValue += temp.quantity * temp.cost;
            in.read((char*)&temp, sizeof(temp));
        }
        in.close();
    }

    cout << "Total quantity of items: " << totalQuantity << endl;
    cout << "Total cost: $" << totalCost << endl;
    cout << "Total value: $" << totalValue << endl;
    cout << "Profit/loss: $" << totalValue - totalCost << endl;
}

void getItem(inventory& item) {
    cout << "Enter the item name:\n";
    cin >> item.item;
    cout << "Enter the quantity:\n";
    cin >> item.quantity;
    cout << "Enter the cost per item:\n";
    cin >> item.cost;
    item.costW = item.cost * item.quantity;
}

void displayItem(const inventory item) {
    cout << "Item: " << item.item << endl;
    cout << "Quantity: " << item.quantity << endl;
    cout << "Cost per item: $" << item.cost << endl;
    cout << "Total cost: $" << item.costW << endl;
}