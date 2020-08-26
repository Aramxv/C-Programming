#include <stdio.h>
#include <stdlib.h>

/* 
        --------------------------------------------------
        | Function Prototype is simply the declaration   |
        | of a function that specifies function's name,  |
        | parameters and return type. It doesn't contain |
        | function body.                                 |
        --------------------------------------------------
    */

double cube(double num);

int main()
{
    printf("Answer is %f\n", cube(7.0));
    return 0;
}

double cube(double num)
{
    return num * num* num;
}