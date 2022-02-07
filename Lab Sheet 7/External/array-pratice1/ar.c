// Practicing arrays.

#include <stdio.h>

int main()
{
 int userinfo[5], usr;

 printf("Please enter city, userage, userfirname, userlastname :  ");

 for (usr = 0; usr < 5; usr++)
 {
  scanf("%d", &userinfo[usr]);
  printf("%d \n", userinfo[usr]);
  break;
 }
}