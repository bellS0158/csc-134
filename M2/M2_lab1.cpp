/*
M2Lab1
Crate Sales 
Bell,S
2/5/24
*/

#include <iostream>
using namespace std; 


int main() {
    //Take 1 - just a rectangle 
    //Constansts for Cost 
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHAREGE_PER_CUBIC_FOOT = 0.5;
    
    //Declare variables 
    double length, width, height, cost, charge, profit; 
    double volume; 
    // Ask for user input
    cout << "Length? ";
    cin >> length;
    cout << "width?";
    cin >> width;
    cout << "Height?";
    cin >> height; 
    
    // Do calculations 
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT; 
    charge = volume * CHAREGE_PER_CUBIC_FOOT;
    profit = charge - cost;
    

    // print the answer 
    cout << "The volume is: " << volume << " cubic feet.\n" << endl; 
    cout << "COST to build: $" << cost << endl; 
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;  


}
