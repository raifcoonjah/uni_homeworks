// 4.	Write a program which accepts as input an array and displays the largest and smallest element in the array.
#include <stdio.h>

int main()
{
  int a[100], size, i, bnum, bsmall;

  printf(":: Enter the size of the array (max == 100): ");
  scanf("%d", &size);

  printf(":: Enter the %d elements of the array: ", size);
  for (i = 0; i < size; i++)
    scanf("%d", &a[i]);

  bnum = a[0]; // this is telling C that bnum is the first number inside the array
  for (i = 1; i < size; i++)
  {
    if (bnum < a[i])
    {
      bnum = a[i];
    }
  }
  printf(":: The largest element is: %d", bnum);

  bsmall = a[0]; // this is telling C that bsmall is the first number inside the array
  for (i = 1; i < size; i++)
  {
    if (bsmall > a[i])
    {
      bsmall = a[i];
    }
  }
  printf(":: The bsmallest element is: %d", bsmall);
  return 0;
}