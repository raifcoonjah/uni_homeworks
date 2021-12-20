/*
Write a function that takes two integer values as parameters and returns the smaller of the
two numbers.
*/

#include <stdio.h>

int main()
{

 // Declare stuff

 int n1, n2;

 // Ask for first number
 printf("Enter first number: ");
 scanf("%d", &n1);

 // Ask for second number:

 printf("Enter second number: ");
 scanf("%d", &n2);

 // instead of using if and else here,
 // using a while can make the code simpler and much more optimized.
 // Using return 0 to quit the program.
 while (n1 <= n2)
 {
  printf("The smallest number is: %d \n", n1);
  return 0;
 }
 printf("The smallest number is: %d \n", n2);
 return 0;
}