// a program and a cube to calculate the square and the cube of an entered number
//Kellie Henderson, Dr.T, 8-21-2019, online gdb compiler

#include <iostream>


using namespace std;
int main() 
{
   int myAge = 31 ;
  // declare and initialize variables here.
  double number = 0.0, square = 0.0, cube = 0.0 ;

  // Accept Input (I) from the user
  cout << "\n Please enter a number: " ;
  //double number = validate >> number; // accept input of the number blinking cursor
cin >> number;
  // Process (P) Calculations
  square = number * number ;
  cube = square * number ;

  // output
  cout << "\nThe following number, " << number << ", squared is " << square;
  cout << " , and cubed is " << cube << "." << endl;

  if (number > 0)
  {
  cout << "\nLooks Positive Bud!" << endl ;
  }
  else if (number < 0)
  {
    cout << "\nNegative Nancy has arrived!" << endl ;
  }

  // square the number
  if (square > myAge) 
  {
    cout << "\nKellie is so young." << endl ;
  }
  else if (square < myAge)
  {
    cout << "\nWay to make me feel like an Old Jabroni, Jabroni. " << endl;
  }

   // square the number

    // Accept Input (I) from the user
  cout << "\n Please enter a number: " ;
  
  cin >> number; // accept input of the number blinking cursor

// Process (P) Calculations
  square = number * number ;
  cube = square * number ;

 cout << "\nThe following number, " << number << ", squared is " << square;
  cout << " , and cubed is " << cube << "." << endl;

  if (square > myAge) 
  {
    cout << "\nKellie is so young." << endl ;
  }
  else if (square < myAge)
  {
    cout << "\nWay to make me feel like an Old Jabroni, Jabroni. " << endl;
  }

// Process (P) Calculations
  square = number * number ;
  cube = square * number ;

 cout << "\nThe following number, " << number << ", squared is " << square;
  cout << "." << endl;
cin >> number; // accept input of the number blinking cursor

// Process (P) Calculations
  square = number * number ;
  cube = square * number ;

  cout << "\nThe following number, " << number << ", squared is " << square;
  cout << "." << endl;
  if (number == 0.0) 
  {
    cout << "\nThe number is 0." << endl ;
  }
  else if (number != 0.0)
  {
    cout << "\nError: Somthing went wrong! " << endl;
  }

    return 0;

}