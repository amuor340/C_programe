/* This program accepts students' and subject names and their scores.
It calculates and displays each student's total, mean score and grade. */

//Pre-processor directive
#include <stdio.h>

int main()
{
    //Variable(s) to be used in the program
    unsigned short numOfStudents, numOfModules;
    unsigned short n, a;

    //Prompt the user for the number of students and subjects
    printf("Please enter the number of students in the class:\n");
    scanf("%hu", &numOfStudents);

    printf("Please enter the number of modules/subjects the students are taking:\n");
    scanf("%hu", &numOfModules);

    //Arrays to store each student's total, mean and grade
    unsigned int total[numOfStudents];
    float mean[numOfStudents];
    char grade[numOfStudents];

    //Arrays to store students' names, subjects and scores
    unsigned short studentScore[numOfStudents][numOfModules];
    char studentName[numOfStudents][20];
    char moduleNames[numOfModules][15];

    //Read in the students' names
    for(n = 0; n < numOfStudents; n++)
    {
        printf("\nPlease enter the name of student %hu -> ", n + 1);
        scanf("%19s", studentName[n]);
    }

    //Read in the module/subject names
    for(n = 0; n < numOfModules; n++)
    {
        printf("\nPlease enter the name of module/subject %hu -> ", n + 1);
        scanf("%14s", moduleNames[n]);
    }

    //Read in each student's score per module/subject
    for(n = 0; n < numOfStudents; n++)
    {
        //Initialise each student's total to zero
        total[n] = 0;

        for(a = 0; a < numOfModules; a++)
        {
            //Prompt the user for the student's score
            printf("\nPlease enter %s's score in %s -> ",
                   studentName[n], moduleNames[a]);

            scanf("%hu", &studentScore[n][a]);

            //Calculate the student's total
            total[n] += studentScore[n][a];
        }

        //Calculate each student's mean score
        mean[n] = total[n] / (float)numOfModules;

        //Get each student's grade
        if(mean[n] >= 70)
            grade[n] = 'A';
        else if(mean[n] >= 60)
            grade[n] = 'B';
        else if(mean[n] >= 50)
            grade[n] = 'C';
        else if(mean[n] >= 40)
            grade[n] = 'D';
        else
            grade[n] = 'E';
    }
    //Assignmet
    //Display the results
    printf("\n------------------------------------");
    printf("\n%12s%6s%8s%13s%8s%7s%8s%6s",
           	"Student Name", "Math", "Swahili", "Physics", "Python");
    printf("\n------------------------------------");
    for(n = 0; n < numOfStudents; n++)
    {
        printf("\n%12s",studentName[n]);
        for(a = 0; a < numOfModules; a++)
        {
            printf("%6hu", studentScore[n][a]);
        }
        printf("%7%8.0f%6c", total[n], mean[n], grade[n]);
    }
    printf("\n------------------------------------");

    return 0;
}

