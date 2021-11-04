// Question: Write a program to display your student ID, name, date of birth, address, telephone
// number, mobile number, and favourite colour as follows:
// ****************************************
// * Student ID: myStudentID    *
// * Name: myName               *
// * Date of birth: myDateOfBirth   *
// * Address: myAddress               *
// * Telephone number: myTelephoneNumber   *
// * Mobile number: myMobileNumber   *
// * Favourite colour: myFavouriteColour  *
// ****************************************

// Compiled using Clang

// Answer: 
#include <stdio.h> 
int main()
{ 
 printf("****************************************\n");
 // Using \n to make a new line after each line.
 // Also making use of color to give it a "cool look"
 printf("* STUDENT ID: Unknown * \n");
 printf("* NAME: Raif Coonjah * \n");
 printf("* DOB: 13th Sep, 2001 * \n");
 printf("* Address: L42 Rohan Street, Port-Louis * \n");
 printf("* Telephone Number: 2174995 * \n");
 printf("* Mobile Number: +23058126299 * \n");
 printf("* Favorite Colour: Black * \n");
 printf("****************************************\n");
 return 0;
}

// #include <stdio.h> 
// This statement tells compiler to include this stdio.h file in the program. 
// This is a standard input output file that contains the definitions of common input output functions 
// such as scanf() and printf(). In the above program we are using printf() function.

// int main() 
// is the function name and int is the return type of this function. Every 
// C program must have this function because the execution of program begins with the main() function. 
// The 0 return value of this function represents successful execution of program while the return value 1 
// represents the unsuccessful execution of program. 
// This is the reason we have return 0; statement at the end of this main function.

//printf(""); 
// – This function displays the content within double quotes as it is on the screen.

// return 0;
// The value 0 means successful execution of main() function.
