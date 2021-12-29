/*
Write a function that takes two integer parameters x and y and returns the value of x2 +
y2.
*/


#include <stdio.h>
#include <math.h> // Using this as we're making use of the pow() function. 

int main(){

// Declare stuff 
double n1, n2, total;

// Ask for user for the two numbers: 

printf("Enter First integer: ");
scanf("%lf", &n1);

printf("Enter second integer: ");
scanf("%lf", &n2);

// Caculation 

total = pow(n1, n2);

// Using printf to present output value. 
printf("Value is:  %lf", total);

return 0;

}