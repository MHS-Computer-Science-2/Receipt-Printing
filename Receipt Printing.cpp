// Receipt Printing

#include <iostream>
#include <string>
using namespace std;

// Computes and returns the subtotal of purchasing an item
double getSubtotal(int qty, double price) {
    double subtotal = qty * price;
    return subtotal;
}

// Computes and returns the sales tax charged for subtotal
double getTax(double subtotal) {
    double tax = subtotal * 0.06;
    return tax;
}

// Creates and returns a string containing the subtotal, tax, and
// final total for a purchases formatted as currency
string getReceipt(string itemName, int qty, double price, double subtotal, double tax) {
    string r = itemName + ": " + to_string(qty) + " @ " + to_string(price).substr(0, to_string(price).find(".") + 3) + "\n";
    r += "Subtotal: $" + to_string(subtotal).substr(0, to_string(subtotal).find(".") + 3) + "\n";
    r += "Tax:      $" + to_string(tax).substr(0, to_string(tax).find(".") + 3) + "\n";
    r += "Total:    $" + to_string(subtotal+tax).substr(0, to_string(subtotal+tax).find(".") + 3) + "\n";
    return r;
}

int f(int x) {
    return x * x - 2;
}

int main()
{
    // Ask the user to enter:
    //  - The name of their item
    //  - How many they want
    //  - The price of each item

    // Display the receipt for the user's purchase.
    // You must use the 3 functions above to help you. Do not alter the functions.

    
    system("pause");
}
