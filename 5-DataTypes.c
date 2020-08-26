#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Integer (Whole Number) %d
    int age = 40;

    // Double (Decimal Number) 64bit floating point number %lf
    double gpa = 1.25;

    // Float (Decimal Number)  32bit floating point number %f
    float gwa = 1.75;

    // Characters (Single Character) %c
    char grade = 'A';

    // Characters (String Array) %s
    char phrase[] = "Giraffe Academy";

    // NewLine \n


    printf("Your age is %d\n", age);
    printf("Your gpa this semester is %lf\n", gpa);
    printf("Your gwa this year is %f\n", gwa);
    printf("and your grade is %c\n", grade);
    printf("You are invited to an interview in %s\n", phrase);

    return 0;
}