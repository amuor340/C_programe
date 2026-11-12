/* switch case */

/* Write a C program called ‘student_details’ that stores and displays a student's details.
Your program should:
Declare a variable for the student's age using an appropriate data type.
Declare a variable for the student's average mark, allowing decimal values.
Declare a variable for the student's grade, represented by a single character.
Assign sample values to all three variables.
Display the values using appropriate printf() format specifiers. */
#include <stdio.h>

int main()
{
    //variable(s) to be used in the program
    int age=17;
    float mark=85.7;
    char grade='A';

    printf("\n=students Details=");
    printf("\nAge %d",age);
    printf("\nMarks %f",mark);
    printf("\nGrade %c", grade);
    printf("\n==================");

    return 0;

}
