#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Printing out text
    printf("Hello\nWorld\n");

    printf("Hello\"World\n");

    /* Printf Format Specifier
        %d - integer
        %s - string
        %f - float
        %lf - double
        %c - single character
    */
    printf("My favorite number is %d\n", 11);

    printf("My favorite %s is %d\n", "digit", 47);

    printf("My gpa this sem is %f\n", 1.25);

    printf("Your grade in highschool is %lf\n", 74.5);

    printf("What is the meaning of this letter %c\n", 'A');

    return 0;

}