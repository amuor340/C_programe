/* switch case */

/* Write a C program called “student_grade” that determines a student's examination result.
Ask the user to enter a mark between 0 and 100, then display the appropriate result using if, else if and else.Use these rules:
70–100: Distinction
60–69: Credit
50–59: Pass
0–49: Fail
Below 0 or above 100: Invalid mark
Your program should handle invalid marks correctly and display a suitable message for each outcome. */
#include <stdio.h>

int main()
{
    //variable as marks
    int marks;

    //entering the value of marks
    printf("Please Enter the Student marks: \n");
    scanf("%d", &marks);
    if (marks>100)
        printf("Invalid mark! Please enter marks that is less or equal to 100");
    else if (marks>=70)
        printf("Distinction");
    else if (marks>=60)
        printf("Credit");
    else if (marks>=50)
        printf("Pass");
    else if (marks >=0)
        printf("Fail");
    else
        printf("Invalid mark! Please marks that starts from 0 or above)");

    return 0;

}
