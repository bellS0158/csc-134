//
//
//M4T1

#include <iostream>
using namespace std; 

int main() {
    // Program 5-3 
    // Using a single while loop 
    // remember we start counting from zero

    int number = 5;

    int i = 0;
    while (i < number) {
        cout<< "Hello" << endl; 
        //i = i + 1;
        i++; // shorter version of the above line
    }
    cout << "Thats all!" << endl; 

    // program 5-6
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10; 

    int num = MIN_NUMBER;
    // print a table header 
    cout << "Number\tNumber Squared" << endl;

    while (num <= MAX_NUMBER) {
        // We start at 1.
        // Stop at 10 becaus pf <=
        // (< would stop at 9)
        cout << num << "\t\t" << num * num << endl; 
        // If we dont increase num, it will run forever.
        num ++;


    }





}