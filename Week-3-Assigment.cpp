#include <iostream>
#include <string>
#include <iomanip>   // For nice formatting with receipt
using namespace std;

int main() {
    string itemName;        
    int quantity;          // how many items the user wants
    double unitPrice;      // price of a single item
    double subtotal;       // before tax
    double taxRate;        // percentage entered by the user
    double total;          // final cost after tax

    // Get item name 
    cout << "Enter the item name: ";
    getline(cin, itemName); //Allows for spaces in name

    // Get quantity
    cout << "Enter the quantity: ";
    cin >> quantity;

    // Get cost per item
    cout << "Enter the cost per item: $";
    cin >> unitPrice;

    // Get sales tax rate
    cout << "Enter sales tax rate (e.g., 8.25 for 8.25%): ";
    cin >> taxRate;

    // Calculation
    subtotal = quantity * unitPrice;
    total = subtotal + (subtotal * (taxRate / 100.0));

    // Displays a receipt for the given data
    cout << fixed << setprecision(2); // Formats all numbers to 2 decimal places
    cout << "\n----- Receipt -----\n";
    cout << "Item: " << itemName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Unit Price: $" << unitPrice << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax (" << taxRate << "%): $" << subtotal * (taxRate / 100.0) << endl;
    cout << "Total: $" << total << endl;
    cout << "-------------------\n";

    return 0;
}