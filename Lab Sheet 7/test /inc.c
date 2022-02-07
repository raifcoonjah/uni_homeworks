// write a program which allows data entry to an array and displays the element in reverse order of the array.

#include <stdio.h>

int main()
{
 int arr[5], usrarry; // Allow user to input up to 5 intergers inside the array.

 printf(":: Enter 5 integer numbers \n"); // getting input from user.

 for (usrarry = 0; usrarry < 5; usrarry++)
  scanf("%d", &arr[usrarry]);

 printf(":: Array elements are (in reverse):\n"); // displaying output.
 for (usrarry = 4; usrarry >= 0; usrarry--)       // using this small for loop to reverse the order.
  printf("%d \n", arr[usrarry]);

 return (0);
}