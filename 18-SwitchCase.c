#include <stdio.h>
#include <stdlib.h>

// Build a grade statements using Switch case statement

int main()
{
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A' :
        printf("You did Awesome, perfecto!\n");
        break;
    case 'B' :
        printf("You did Great, You got room of improvements!\n");
        break;
    case 'C' :
        printf("You did quite good!\n");
        break;
    case 'D' :
        printf("You did poorly!, Study Harder!\n");
        break;
    case 'F' :
        printf("You Failed!\n");
        break;
    
    default:
        printf("This is not a valid grade. Valid Grades [A, B, C, D ,F]\n");
        break;
    }

    return 0;
}