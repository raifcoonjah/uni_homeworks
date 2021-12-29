/*
Write a function that takes as parameter a phone number and returns the sum of the digits
in the phone number. E.g. if the phone number is 403 7400, then the function returns the
value 18 (i.e. 4 + 0 + 3 + 7 + 4 + 0 + 0). You may assume that all phone numbers have
exactly 7 digits.
*/

#include <stdio.h>

int main(){

int phone_num, sum = 0, mod;


printf("Enter phone number: ");
scanf("%d", &phone_num);

while (phone_num > 0){

mod = phone_num % 10;
sum = sum + mod;
phone_num = phone_num / 10;
}

printf("The total sum: %d \n", sum);
return 0;

}
