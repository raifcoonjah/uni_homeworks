/*
Write a function that takes the name and price (VAT-exclusive) of a product as parameter
and returns the name and VAT-inclusive price of the product. You may assume that VAT
in Mauritius is currently 15%.
*/


// Including needed libraries
#include <stdio.h>


int main() {

char name[20];
float vat = 15.0, price;

printf("Enter product name: ");
scanf("%s", &name);

printf("Enter product price: ");
scanf("%f", &price);

 vat = price * 100.0 / (100.0 + vat);

printf("==| Product name: %s |== \n", name);
printf("==| Price (VAT-inclusive): %f |== \n");

return 0;
}