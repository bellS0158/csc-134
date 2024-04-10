#ifndef M6LAB1_UTILITY_H
#define M6LAB1_UTILITY_H
// header files let you add more functions to your program
#include <iostream>
using namespace std; 
// prototypes 
string shell_name(int shell);

// Definitions 
string shell_name(int shell) {
    // input: the shell number (0, 1 ,2)
    // output: the name ("Empty", "Blank", "Live")
    string name;
    const int EMPTY = 0; 
    const int BLANK = 1;
    const int LIVE = 2; 
    if (shell == EMPTY) {
        name = "Empty";
    }
    if (shell == BLANK) {
        name = "BLANK";
    }
    if (shell ==LIVE){
        name = "LIVE";
    }

    return name;
}
 


#endif // M6LAB_UTILITY_H
