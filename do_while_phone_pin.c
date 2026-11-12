/*This program accepts the pin number from the phone user and if it's correct, unlocks it. When the incorrect PIN is entered 3 times the phone blocks.*/

//Pre-processor directive
#include <stdio.h>
#define PIN 1234
int main()
{
    //Variable(s) to be used in the program
    unsigned int userPIN;
    int count = 3;

    do
    {
        //Prompt the user for their pin number
        printf("please enter your phone PIN\n");
        scanf("%u",&userPIN);

        //Compare the input PIN and the stored PIN
        if(userPIN == PIN)
        {
//            printf("Welcome user");
            break;//exit the loop
        }
        else
        {
            count--;
            if(count > 0)
            {
                printf("Sorry, the pin is incorrect\n");
                printf("%d attempts left!\n",count);
            }
        }
    }
    while(count > 0);
    printf( count > 0?"Welcome User":"Sorry, your phone is blocked!\nUnlock using your PUK.\n");
    return 0;
}
