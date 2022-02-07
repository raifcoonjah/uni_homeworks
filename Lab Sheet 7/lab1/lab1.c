/* Write a program which allows input of 100 data to an array and displays the value in the array. */

/*
Breaking down the question

1. A program obviously in C we start with int main and include.
2. "100 data to an array":
a. We need to have an array and it has to have 100 (myarr[100])
b. We need to have an data type next to the array aswell. (we have the ability to choose which data type we're going to use)
c. Allows input > get input from the user > meaning scanf.
3. Displays: printf (showing output)

*/

#include <stdio.h>
int main()
{

// Initialized i and j 
 int i, j;

 // Declearing 100 data in the array.
 int myarr[100];

 for (i = 0; i < 100; i++)
 {
  printf("Enter a number: ");
  scanf("%d", &myarr[i]); 
 }

 for (j = 0; j < 100; j++)
 {
  printf("%d", myarr[j]);
 }

 return 0;
}