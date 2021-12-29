/*
Write a function that takes as parameter a value n and returns the square and cube of n.
Use the function in a program that accepts as input the radius of a sphere and calculates
and displays the surface area and volume of the sphere
*/

#include <stdio.h>
#include <math.h>

int main(){

int n, sqr, cb;

 printf("Enter a number: ");
 scanf("%d", &n);


while (n <= 0){
 printf("Invalid number! \n");
 printf("+ Terminating program.. +");
}
 
 // lets calculate the square  first. 
sqr = n * n; // We can use a simple pow aswell to make this simpler. 
cb = n * n * n;
printf(":: The square of %d is: %d \n", n, sqr);
printf(":: The cube of %d is: %d \n", n, cb);

printf("==== First job done, moving to next one.. ==== \n");


// Starting new phase.. 

// Declare stuff
float PI = 3.14, area, sphere_vol;
int ros;

printf("Enter radius: ");
scanf("%d", &ros);

// Let's calculate the area of the sphere. But first let's check if the number is a zero. 

while (ros <= 0){
 printf("Invalid number! \n");
 printf("+ Terminating program.. +");
}


area = (4 * PI * ros * ros);

printf("Area of the sphere: %f \n", area);

sphere_vol = (4/3.0)*PI*ros*ros*ros;

printf("Volume of sphere: %f \n", sphere_vol);

return 0;
}
