/*
3.	The Konditorei coffee shop sells coffee at $10.50 a pound plus cost of shipping.
Each order ships for $0.86 per pound + $1.50 fixed cost for overhead.
Write a program that calculates the cost of an order.
*/

#include <stdio.h>

int main()
{

 // Declare variables
 int total;
 double cost_of_order;
 double one_pound = 12.86; /* 0.86 + 1.5 + 10.50 */

 printf("Welcome! ☕ \n");

 // Ask user for input
 printf("Enter your order in pounds: ");
 scanf("%lf", &cost_of_order);

 // Calculation
 total = cost_of_order * one_pound;

 // Output
 printf("+ Cost of your order is: $%d + \n", total);
}