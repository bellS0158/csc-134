// if statement example2
// standard header

// CSC 134
// Schefeyon Bell 
// compiler directives
// (required for the program to run)
#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 

  // ask the question
  cout << "Do you like Box Chevys or Bubble Chevys." << endl;
  cout << "Type 1 for Box or 2 for Bubble: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose BOX CHEVYS BABYYYYY" << endl;
    cout << "Would you like 24 or 28 inch rims?" << endl;
    cout << "Type 1 for 28s or 2 for 24s: ";
    cin >> choice;
        if (1 == choice) {
            cout << "Big boy 28s" << endl;
        }
        else if (2 == choice) {
            cout << "Nice size.. BUT GO BIG BABY" << endl;
        }

  }
  else if (2 == choice) {
  	cout << "You chose BUBBLES IN THE HOUSE" << endl;
    cout << "Would you like 24 or 28 inch rims?" << endl;
    cout << "Type 1 for 28s or 2 for 24s: "; 
    cin >> choice;
      if (1 == choice) {
        cout << " Big boy 28s" << endl; 
      }  
      else if (2 == choice) {
        cout << "Nice size.. BUT GO BIG BABY" << endl; 
      }
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method