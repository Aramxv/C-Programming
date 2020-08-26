#include <stdio.h>
#include <stdlib.h>

    /* 
        -----------------------------------------
        | Function is basically a collection of |
        | code that  performs a specific task   | 
        -----------------------------------------
    */

   /* 
        --------------------------------------------------
        | Function Prototype is simply the declaration   |
        | of a function that specifies function's name,  |
        | parameters and return type. It doesn't contain |
        | function body.                                 |
        --------------------------------------------------
    */
   
   

char addTheTwoInput(char name[], int age);

int main()
{
    addThetwoInput("Amira", 24);
    addThetwoInput("Lesley", 45);
    addThetwoInput("Arra", 24);

    return 0;
}

void addThetwoInput(char name[], int age)
{
    printf("Hello %s, You are %d\n", name, age);
}
