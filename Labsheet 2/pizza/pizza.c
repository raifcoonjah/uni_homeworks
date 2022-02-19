/*
2. Write a program that calculates the cost per square entimeter of a circular pizza, given its diameter and price.
*/


/* This C code is just asking the user for a simple input and a simple out. */


#include <stdio.h>

void main()
{

 int dia, price, total;

 /* Ask user for diameter */
 printf("Enter diameter (cm): ");
 scanf("%d", &dia);

 /* Ask user for price. */
 printf("Enter price of 🍕 pizza: $");
 scanf("%d", &price);

 /* Check value and make sure we do the correct calculation */

 if (dia >= price)
 {
  total = dia / price;
  printf("Price per square centimeter: $%d \n", total);
 }

 else if (price >= dia)
 {
  total = price / dia;
  printf("Price per square centimeter: $%d \n", total);
 }
}
