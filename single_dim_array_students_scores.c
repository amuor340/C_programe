#include <stdio.h>

int main()
{
    // Variable(s) to be used in the program
    unsigned short score[5]; // Array to hold students' exam scores
    float meanScore;         // Holds the class average score
    unsigned int total = 0;
    unsigned short highestScore=0,lowestScore=120;
    int n;

    // Prompt user for the students' scores
    for(n = 0; n < 5; n++)
    {
        printf("Please enter the score for student %d:\n", n + 1);
        scanf("%hu", &score[n]);
        // Calculate the total scores of the entire class
        total += score[n];//same as total=total + score[n]

        // Get the lowest and highest score in the class
        if(score[n]>highestScore)
            highestScore=score[n];
        if(score[n]>lowestScore)
            highestScore=score[n];
    }

    // Calculate the mean/average score
    meanScore = total / 5.0;

    printf("\n=====================================");
    printf("\nTotal Score: %d", total);
    printf("\nThe class average score is %.2f\n", meanScore);
    printf("\nThe highest class average is %hu", highestScore);
    printf("\nThe Lowest class average is %hu", lowestScore);
    printf("\n=====================================");

    // Display the average score


    return 0;
}
