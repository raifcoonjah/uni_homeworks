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
  int studentID[100], mk_maths[100], mk_phy[100], StudentsNum, maths, physics, d, four0four, studentid_Store;

  // [?] Asking user to input the number of students
  printf(":: Enter number of students: ");
  scanf("%d", &StudentsNum);

  // [?] Ask user to input for subject ** MATHS **
  for (maths = 0; maths < StudentsNum; maths++)
  {
    printf(":: Enter marks for maths: ");
    scanf("%d", &mk_maths[maths]);
  }

  // [?] Ask user to input for subject ** PHYSICS **
  for (physics = 0; physics < StudentsNum; physics++)
  {
    printf(":: Enter number of physics: ");
    scanf("%d", &mk_phy[physics]);
  }

  printf("Enter student ID: ");
  scanf("%d", &studentID);

  for (d = 0; d < StudentsNum; d++)
  {

    if (studentid_Store = studentID[d])
    {
      printf("Dear %d, you got: ", studentID, mk_maths[d]);
      printf("Dear %d, you got: ", studentID, mk_phy[d]);
      four0four = 1;
    }
  }
  if (four0four = 0)
  {
    printf("Student ID wasn't found! Please try again.");
    return 0;
  }
}
