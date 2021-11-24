/*
Write a program that asks a user the radius of a circle, and calculates and displays the
area. The program should only accept non-zero positive values for the radius and display
an error message if the user tries to input a zero or negative value.
*/

#include <stdio.h>

int main()
{
  int radius;
  float pi_value = 3.14, area;

  printf("Pleas enter Radius: ");
  // %d is used to give the answer as integer.
  scanf("%d", &radius);

  if (radius <= 0)
  {
    printf("Error, %d is a negative number! \n");
  }
  else
  {

    area = pi_value * radius * radius;
    printf("Area is: %f \n", area);
    return (0);
  }
}
