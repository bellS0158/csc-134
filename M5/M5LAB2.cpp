// M5LAB2
// Header goes here

#include <iostream>
using namespace std;

//Function prototypes
double getWidth();
double getLength();
double getArea(double length, double width);
void displayData(double length, double width, double area);


// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength() {
    int length;
    //ask the user for the length
    cout << "What is the length of the rectangle? ";
    cin >> length;
    return length;
}

double getWidth() {
    int width;
    //ask the user for the width
    cout << "what is the width of the rectangle? ";
    cin >> width;
    return width; 
}
double getArea(double length, double width) { 
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;

}