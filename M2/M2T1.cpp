//M2T1
// Receipt Calculator
// Bell, S
// 4-4-24


#include <iostream>
using namespace std; 

int main() {
    // This program is a simple receipt calculator.

    // declare our variables
    double mealPrice = 5.99;
    double taxRate = 0.08;
    double taxAmount;
    double total;

    // Calculate the tax amouny and the total
    taxAmount = taxRate * mealPrice; // 8% of 5.99
    total = mealPrice + taxAmount;

    // print output 
    cout << "Thank you for dining with us." << endl;
    cout << "Your meal total is $" << mealPrice << endl;
    cout << "The tax is $" << taxAmount << endl;
    cout << "Your total is $" << total << endl;
    cout << "Please come again." << endl;



}