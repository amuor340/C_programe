/*This program accepts the pin number from the phone user and if it's correct, unlocks it. When the incorrect PIN is entered 3 times the phone blocks.*/

//Pre-processor directive
#include <stdio.h>

int main()
{
    //Variable(s) to be used in the program
    int n;
    n=1;//assigned it to initial number

    //while loop
    while (n<=5)
           {
               printf("%2d x 8 = %d\n",n, n * 8);
                n++;//post incremented by 1
           }

    return 0;
}
