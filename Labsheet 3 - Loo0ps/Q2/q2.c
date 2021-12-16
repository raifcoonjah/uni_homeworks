/*
Write a program which continuously asks the user to key in numerical values and finds
the square root of these numbers. The program should stop when the user types in a
negative number.
*/

#include <stdio.h>
#include <math.h> // Using this lib to make square root calculation much eaiser.

int main()
{

 double num, squ;

 do // using do-while.
 {
  printf(":: Enter number: ");
  scanf("%lf", &num);

  squ = sqrt(num);
  printf(":: Square root is: %lf \n", squ);

 } while (num > 0);
 {
  printf(":: [Error] This number is negative and cannot be calculated. \n:: Program stopped! \n");
  return 0;
 }
 {
  return main();
 }
}