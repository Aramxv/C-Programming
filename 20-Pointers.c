#include <stdio.h>
#include <stdlib.h>

/* 
    --------------------------------------------------------------------------
    | Pointer is a type of data in our program and it's a memory address.    |
    |                                                                        |
    | We can access the memory addresses of specific variables by using %p   |
    | as data type and ampersand and then type the name of the variable.     |
    --------------------------------------------------------------------------
*/

int main()
{
    int age = 30; 
    int * pointerAge = &age; // Getting the memory address of variable 'age' 

    printf("Age's memory address is %p\n", &age);
    printf("Age's memory address is: %p\n", pointerAge); // Referencing a pointer variable 

    printf("Age's memory address is: %d\n", *pointerAge); // Dereference a pointer variable
    return 0;
}