#include <stdio.h>
#include <stdlib.h>

// Build a better calculator than the basic earlier.

int main()
{
    double number1; 
    double number2;
    char operator;

    printf("Enter a number: ");
    scanf("%lf", &number1);
    printf("Enter an operator: ");
    scanf(" %c", &operator);
    printf("Enter a number: ");
    scanf("%lf", &number2);

    if (operator == '+') {
        printf("Result is %f\n\n", number1 + number2);
    } else if (operator == '-') {
        printf("Result is %f\n\n", number1 - number2);
    } else if (operator == '*') {
        printf("Result is %f\n\n", number1 * number2);
    } else if (operator == '/') {
        printf("Result is %f\n\n", number1 / number2);
    } else {
        printf("Invalid Operator! Valid Operators [+, -, /, *]\n");
    }

    return 0;
}