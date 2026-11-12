#include <stdio.h>

int main()
{
    // Variable(s) to be used in the program
    unsigned short int n = 1, a;

    // Use do...while loop to display the numbers
    do
    {
        for (a = 1; a <= n; a++)
            printf("%hu", a);

        printf("\n");
        n++;

    } while (n <= 7);

    return 0;
}
