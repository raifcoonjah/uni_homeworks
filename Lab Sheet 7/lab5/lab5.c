/*
5.	Write a simple program which accepts an array of: Student ID, marks in Maths, and marks in Physics. The program should allow
searching of a specific students ID and display his marks.
Hint:
student_Names=[ '1', '2', '3', '4', ......]
marks_Maths=[70,30,56,78,. . . .]
marks_Physics=[90,56,89,70,. . . . ]

marks_Maths[n] and marks_Physics[n] refer to the marks of student 'n' in Maths and Physics respectively.
e.g. 1, (student_ID[0]) scored 70 in Maths (marks_maths[0]) and 90 in Physics
(marks_Physics[0])
*/

#include <stdio.h>

int main()
{
 int studentID[100], mk_maths[100], mk_phy[100], StudentsNum, maths, physics, d, four0four;

 // [?] Asking user to input the number of students
 printf(":: Enter number of students: ");
 scanf("%d", &StudentsNum);

 // [?] Ask user to input for subject ** MATHS **
 printf(":: Enter marks for maths: ");
 for (maths = 0; maths < StudentsNum; maths++)
  scanf("%d", mk_maths[maths]);

 // [?] Ask user to input for subject ** PHYSICS **
 printf(":: Enter number of physics: ");
 for (physics = 0; physics < StudentsNum; physics++)
  scanf("%d", mk_phy[physics]);
}
