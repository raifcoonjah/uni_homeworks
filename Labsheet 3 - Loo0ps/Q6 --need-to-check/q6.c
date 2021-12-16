/*
Write a program which accepts and a positive integer from the user and displays the list
of integers from 0 to that number in descending order
*/

// Making use of array here, I'm very confused about this one.

#include <stdio.h>

int main()
{

 // Declare variables
 int num;

 printf("Enter a positive number: ");
 scanf("%d", &num);

 while (num <= 0) // using while as we always need to check for this number.
 {
  printf("%d, is a negative number. Please try again! \n", num);
  return main();
 }
}