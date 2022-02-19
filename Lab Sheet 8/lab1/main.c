#include <stdio.h>

int main()
{
 int vals[100]; // this is only used to set the amount of value we need to store inside the array. 

 // Printing this inside the terminal to ask the user for input.
 printf("Enter 100 numbers (ex: 1 2 3 4 5..): "); // #1

 // Let's take the input and store it inside the array now.
 // Making use a for loop.

 // int a new value called "newvals", settings its initial value to 0 and then asking if the newvals is less than 100
 // add 1 to it and do that until we reach 100. 
 for (int newvals = 0; newvals < 100; newvals++)
 {
  scanf("%d", &vals[newvals]); // storing user input from #1
  printf("%d \n", vals[newvals]); // printing the values in order and each of them on a new line.
 }

 return 0; // basic exit statement, saying to end. 
}