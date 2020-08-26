#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    printf("%f\n", 8.9);

    // You can also do math in here it will add the two value
    printf("%f\n", 5.0 + 4.5);

    // You can also do math in here it will subtract the two value
    printf("%f\n", 5.0 - 4.5);

    // You can also do math in here it will multiplu the two value
    printf("%f\n", 5.0 * 4.5);

    // You can also do math in here it will divide the two value
    printf("%f\n", 5.0 / 4.5);

    // Always store values in a variable 
    int firstNum = 5;
    int secondNum = 4;
    printf("%d\n", firstNum + secondNum);

    // Some function can be used in math 
    printf("%f\n", pow(2, 3)); // 2 raise to the third power
    printf ("%f\n", pow(4, 3)); //4 raise to the third power
    
    printf("%f\n", sqrt(36)); // Square root of 36

    printf("%f\n", ceil(36.256)); // Round the number up

    printf("%f\n", floor(36.656)); // Round the number down
    
    /* 
       Exit Status of the application 
       On most operating systems returning 0 is a 
       success status saying "The Program Worked Fine!".
    */ 
   
    return 0;
}