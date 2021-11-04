#include <stdio.h>
// Write a program to greet a person by his/her’name and then, on the next line, ask the
// person where he/she lives. The program must then display the name and address of the person on a
// new line in the following format:
// Tom lives at Reduit. (Suppose the person’s name is Tom and he lives at Reduit)

#include <stdio.h> 

int main() 
{ 
char name[20];
char address[20];
//I've allocated 20 bits you can allocate as much as you want 
printf("Enter your name: "); 
//We will use fgets to store the input as gets is a dangerous function and can overload memory buffers 
fgets(name,20,stdin); 
printf("Where you do live?: ");
fgets(address,20,stdin);
printf("My name is")
printf("%s",name); //display the name 
return 0; 
} 