/*This program accepts the pin number from the phone user and if it's correct, unlocks it. When the incorrect PIN is entered 3 times the phone blocks.*/

//Pre-processor directive
#include <stdio.h>

int main()
{
    //Variable(s) to be used in the program
    unsigned int n;

     for(n=10;n<=70;n++)
     {
         if (n%7==0 && n%2==0)
            printf("\n%02d is evenly divisble by 7", n);
     }

    return 0;
}
