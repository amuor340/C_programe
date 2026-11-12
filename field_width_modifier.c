
#include <stdio.h>

int main()
{
    // Character array to hold a string
    char useString[] = "Programming";

    // Integer variables
    int num = 555, num1 = 8, num2 = 48;

    // Long variable
    long int largeNum = 12345678;

    // Float variable
    float myPi = 3.142159626;

    // Display variables using various field modifiers
    printf("num1 with no field modifier.\n[%d]", num);
    printf("\nnum1 with left justify '-' field modifier.\n[%-10d]", num);
    printf("\nnum1 with minimum field width modifier.\n[%10d]", num);
    printf("\nnum1 with leading zeros '0' field modifier.\n[%010d]", num);

    printf("\nmyPi with 2 decimal places precision modifier.\n[%.2f]", myPi);
    printf("\nmyPi with minimum field width and 5 decimal places.\n[%10.5f]", myPi);

    printf("\nuseString with maximum number of characters to display.\n[%.3s]", useString);

    printf("\nlargeNum with a long int specifier.\n[%ld]", largeNum);
    printf("\nnum2 displayed using variable field width modifier.\n[%*d]", num1, num2);

    return 0;
}
