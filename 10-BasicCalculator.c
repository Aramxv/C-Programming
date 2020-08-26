#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Basic Calculator 
    double firstNumber;
    double secNumber;

    printf("Enter the first number: ");
    scanf("%lf", &firstNumber);

    printf("Enter the second number: ");
    scanf("%lf", &secNumber);

    printf("Result: %f\n", firstNumber + secNumber);

    return 0;
}