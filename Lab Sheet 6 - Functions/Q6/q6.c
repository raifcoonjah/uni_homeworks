/*
A factory pays its workers at the rate of Rs 30 per hour. However, if the number of hours
worked (per week) exceeds 40, the rate is Rs 50 for each excess hour. Write a function
that takes as parameter the number of hours a particular worker has worked per week, and
calculates and returns his/her weekly wage.
*/

#include <stdio.h>

int main()
{

 int usrh, totalwage;

 printf("Enter hours worked this week: ");
 scanf("%d", &usrh);

while  (usrh < 40)
 {
  totalwage = usrh * 30;

  printf("- Your wage for this week is: Rs %d - \n", totalwage);
    return 0;
 }

  totalwage = usrh * 50;
  printf("+ Your wage for this week is: Rs %d + \n", totalwage);
  printf(":: Good job! :D \n");

}