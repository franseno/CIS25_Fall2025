# Week 3 Assignment

## Description
This C++ program demonstrates input/output, variables, and arithmetic operations.  
It simulates a simple receipt system:

1. The user enters:
   - The name of an item
   - The quantity
   - The price per item
   - The sales tax percentage
2. The program calculates:
   - Subtotal
   - Tax amount
   - Total cost
3. The program prints out a formatted receipt.

## How to Compile and Run

### Compile
Open a terminal and navigate to the folder containing the file `main.cpp`. Then run:
```bash
g++ main.cpp -o week3

./week3

Example Run
Enter the item name: green apples
Enter the quantity: 4
Enter the cost per item: $1.50
Enter sales tax rate (e.g., 8.25 for 8.25%): 8.25

----- Receipt -----
Item: green apples
Quantity: 4
Unit Price: $1.50
Subtotal: $6.00
Tax (8.25%): $0.50
Total: $6.50
-------------------
