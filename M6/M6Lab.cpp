#include <iostream>
#include "M6lab1_utility.h"
using namespace std;
/*
CSC 134
M6LAb1 - Buckshot Roulette 
Bell,S
4/10
Array Representing a magazine containing live and dummy rounds.
*/


// constant variables 
const int MAX_SIZE = 6;
const int EMPTY = 0;
const int BLANK = 1;
const int LIVE = 2;

// global array for magazine 
int magazine[MAX_SIZE] = {LIVE, BLANK, LIVE, BLANK, EMPTY, EMPTY};





int main() {
    cout << "M6LAB1" << endl;
    // range based for loop 
    for(int shell : magazine) {
        cout << shell_name(shell) << ", ";
    }
    cout << endl << endl;
    return 0;


}