#include <iostream>
using namespace std; 
// CSC-134
// M5T2
// Bell, S
// 3?20 
// List







int square(int);
void printAnswerLine(int, int);

// function definitions here
int main()
{
    cout << "M5T2" << endl; 
    cout << "Printing a table of squares" << endl; 
    cout << " Num\t\tNum Squared" << endl; 
    cout << "_________________________________________" << endl; 

    // in loop
    // find the square of the number 
    // then call printAnswerline with number and square
    // TODO: do this but ten times
    int num, num_squared;
    num = 1;
    for (int num=1; num <=10; num++) {
        num_squared = square(num);
        printAnswerLine(num, num_squared);
    }
    //square = square(num)
    num_squared = square(num);
    
    printAnswerLine(num, num_squared);
    
    return 0;

}

int square(int number) {
    // input: a number 
    // output: number squared
    int answer = number * number;
    return answer; 
}
void printAnswerLine(int first, int second) {
    // print two numbers with tab separation
    cout << first << "\t" << second << endl; 
}
