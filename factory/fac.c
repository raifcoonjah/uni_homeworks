/*
A factory pays its workers at the rate of Rs 30 per hour if the number of hours worked
(per week) does not exceed 40. Otherwise, the hourly rate is Rs 50 for any hour worked
above 40 in a given week. Write a program that calculates the weekly wages from
number of hours worked per week.
*/

#include <stdio.h>

int main()
{

 int usrh, totalwage;

 printf(":: Please enter hours worked this week: ");
 scanf("%d", &usrh);

 if (usrh < 40)
 {
  totalwage = usrh * 30;

  printf("- Your wage for this week is: Rs %d - \n", totalwage);
 }

 else
 {
  totalwage = usrh * 50;
  printf("+ Your wage for this week is: Rs %d + \n", totalwage);
  printf(":: Good job! :D \n");
 }
}