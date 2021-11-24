/* 
Write a program that asks the user his/her year of birth and calculates his/her age. If
he/she is below 18 years old, the program must display “You are a child aged age years
old!”. Otherwise, it must display “You are an adult aged age years old!”
*/

#include <stdio.h>

int main()
{

 int yearofb, userage;
 int current_year = 2021;

 printf("Please enter year of birth: ");
 scanf("%d", &yearofb);

 userage = current_year - yearofb;

 if (userage <= 18)
 {
  printf("You are a child aged: %d years old! \n", userage);
 }

 else
 {
  printf("You are an adult aged: %d years old! \n", userage);
 }

 // Small check 

 if (yearofb <= 1800)
 {
  printf(":: How are you still alive? \n");
 }

 return (0);
}