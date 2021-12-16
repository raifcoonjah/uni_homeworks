/*
Write a program which asks the user for a number and generates the multiplication table
for this number.
e.g. If the user enters 5, the program should display:
1 * 5 = 5
2 * 5 = 10
3 * 5 = 15
.
.
.
12 * 5 = 60
The program should use a while loop to generate the multiples.
*/

#include <stdio.h>

int main()
{

 // Declare variables
 int num, num2 = 1;

 // Asking user to input the number

 printf(":: Enter number: \n");
 scanf("%d", &num);

 // Showing this text before actually showing the table to let user know.
 printf(":: Multiplication table of %d is: \n", num2);

 // Using while look to stop on 10.
 while (num2 <= 10)
 {
  printf("%d x %d = %d \n", num, num2, (num * num2));
  num2++; // Keep increasing this until we reach then stop the program. (++ means add 1 each time to loop runs)
 }

 return 0;
}