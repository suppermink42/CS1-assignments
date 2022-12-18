#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int NAME_SIZE = 50; // size of the name field

struct InventoryItem {
  char name[NAME_SIZE]; // name of the item
  int quantity; // quantity on hand
  double wholesaleCost; // wholesale cost
  double retailCost; // retail cost
};

void addRecord(fstream &file);
void displayRecord(fstream &file, string name);
void changeRecord(fstream &file, string name);
void displayAllRecords(fstream &file);
void prepareReport(fstream &file);

int main() {
  fstream inventoryFile("inventory.dat", ios::in | ios::out | ios::binary);

  int choice;

  while (true) {
    cout << "Menu:" << endl;
    cout << "1. Add new record" << endl;
    cout << "2. Display record" << endl;
    cout << "3. Change record" << endl;
    cout << "4. Display all records" << endl;
    cout << "5. Prepare report" << endl;
    cout << "6. Quit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        addRecord(inventoryFile);
        break;
      case 2:
        {
          string name;
          cout << "Enter the name of the item: ";
          cin >> name;
          displayRecord(inventoryFile, name);
        }
        break;
      case 3:
        {
          string name;
          cout << "Enter the name of the item: ";
          cin >> name;
          changeRecord(inventoryFile, name);
        }
        break;
      case 4:
        displayAllRecords(inventoryFile);
        break;
      case 5:
        prepareReport(inventoryFile);
        break;
      case 6:
        inventoryFile.close();
        return 0;
    }
  }

  return 0;
}

// function to add a new record to the file
void addRecord(fstream &file) {
  InventoryItem item;

  // get the data for the new record
  cout << "Enter the name of the item: ";
  cin.ignore();
  cin.getline(item.name, NAME_SIZE);
  cout << "Enter the quantity on hand: ";
  cin >> item.quantity;
  cout << "Enter the wholesale cost: ";
  cin >> item.wholesaleCost;
  cout << "Enter the retail cost: ";
  cin >> item.retailCost;

  // validate the data
  if (item.quantity < 0 || item.wholesaleCost < 0 || item.retailCost < 0) {
    cout << "Invalid input. Quantity, wholesale cost, and retail cost must be greater than or equal to 0." << endl;
    return;
  }

  file.seekp(0, ios::end);
  file.write(reinterpret_cast<char *>(&item), sizeof(InventoryItem));

  cout << "Record added." << endl;
}

void displayRecord(fstream &file, string name) {
  file.seekg(0, ios::beg);

  InventoryItem item;

  while (file.read(reinterpret_cast<char *>(&item), sizeof(InventoryItem))) {
    if (item.name == name) {
      cout << "Name: " << item.name << endl;
      cout << "Quantity: " << item.quantity << endl;
      cout << "Wholesale cost: " << item.wholesaleCost << endl;
      cout << "Retail cost: " << item.retailCost << endl;
      return;
    }
  }

  cout << "Record not found." << endl;
}

void changeRecord(fstream &file, string name) {
  file.seekg(0, ios::beg);

  InventoryItem item;
  int filePosition = -1;

  while (file.read(reinterpret_cast<char *>(&item), sizeof(InventoryItem))) {
    if (item.name == name) {
      filePosition = file.tellg(); 
      break;
    }
  }

  if (filePosition == -1) {
    cout << "Record not found." << endl;
    return;
  }

  cout << "Enter the new data for the record:" << endl;
  cout << "Name: ";
  cin.ignore();
  cin.getline(item.name, NAME_SIZE);
  cout << "Quantity: ";
  cin >> item.quantity;
  cout << "Wholesale cost: ";
  cin >> item.wholesaleCost;
  cout << "Retail cost: ";
  cin >> item.retailCost;

  if (item.quantity < 0 || item.wholesaleCost < 0 || item.retailCost < 0) {
    cout << "Invalid input. Quantity, wholesale cost, and retail cost must be greater than or equal to 0." << endl;
    return;
  }

  file.seekp(filePosition, ios::beg);

  file.write(reinterpret_cast<char *>(&item), sizeof(InventoryItem));

  cout << "Record changed." << endl;
}

void displayAllRecords(fstream &file) {
 
  file.seekg(0, ios::beg);

  InventoryItem item;

  cout << "Name\tQuantity\tWholesale cost\tRetail cost" << endl;
  while (file.read(reinterpret_cast<char *>(&item), sizeof(InventoryItem))) {
    cout << item.name << "\t" << item.quantity << "\t" << item.wholesaleCost << "\t" << item.retailCost << endl;
  }
}

void prepareReport(fstream &file) {
  file.seekg(0, ios::beg);

  InventoryItem item;
  double totalWholesaleValue = 0;
  double totalRetailValue = 0;
  int totalQuantity = 0;

  while (file.read(reinterpret_cast<char *>(&item), sizeof(InventoryItem))) {
    totalWholesaleValue += item.wholesaleCost * item.quantity;
    totalRetailValue += item.retailCost * item.quantity;
    totalQuantity += item.quantity;
  }

  cout << "Total wholesale value: " << totalWholesaleValue << endl;
  cout << "Total retail value: " << totalRetailValue << endl;
  cout << "Total quantity: " << totalQuantity << endl;
}
