/*
Modify your program for question 3 to use a while loop instead of a for loop

Initial question:
Write a program which uses a for loop to find out the value of a bank deposit, P (input by
the user), after 10 years given that the annual interest on the deposit is 8.5 % (Assuming
no withdrawals are made during those 10 years)
*/

#include <stdio.h>
#include <math.h> // Including this lib to make things easier.

int main()
{
 // Declare variables
 int year = 1;
 double amnt, principal, rate = 0.085; // Convert from 8.5 to 0.085

 // Ask user for P
 printf("Enter Principal amount: ");
 scanf("%lf", &principal);

 // Display a header of some sort above text.
 printf("\t[YEAR]  ----------------------\t[Amount]\n");

 // while loop changes:
 /*
- Moved value of 1 in declare section instead.
- Moved ++year inside the while loop
 */
 while (year <= 10)
 {
  ++year;
  double amnt = principal * pow(1.0 + rate, year); // I found this formula on the net, it seems to work.

  // Output calculated info in a nice, clean view.
  printf("\tYear: %d \t\t\t\t$%lf \n", year, amnt);
 }
}