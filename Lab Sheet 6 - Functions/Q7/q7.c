/*
At a University, 100-point exams are graded as follows:
Mark Letter Grade
90 ≤ x ≤ 100 A+
80 ≤ x < 90 A
70 ≤ x < 80 A–
65 ≤ x < 70 B+
60 ≤ x < 65 B
55 ≤ x < 60 B–
50 ≤ x < 55 C
45 ≤ x < 50 C–
40 ≤ x < 45 D
30 ≤ x < 40 E
x < 30 F
Write a function that accepts an exam score as input and uses a decision structure to find
the corresponding grade. Display suitable messages if the marks entered do not lie in the
range 0 – 100.
*/

#include<stdio.h>
void main()
{


int marks;
char username[20];
 



// I know this is useless but it makes the final result look cooler xD

printf("Please enter your username: ");
scanf("%s", &username);

printf("Please enter your marks: ");
scanf("%d", &marks);

if (marks <=0 || marks >= 100){
 printf("Invalid number entered, please try again!");

}

else if (marks >= 90){
 printf("Congratulation, %d you scored an A+", username)
}

}
	