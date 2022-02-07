#include <stdio.h>
int main()
{
 // Declare variables and Array
 int n[10];
 int i, j;

 for (i = 0; i < 10; i++)
 {
  n[i] = i + 100;
 }
 for (j = 0; j < 10; j++)
 {
  printf("Element[%d] \n", j, n[j]);
 }
}