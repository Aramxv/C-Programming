#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 
        -------------------------------------------------------------------------------------
        | Using Array in writing C Program that gonna be dealing with a bunch of            |
        | different data, one of the things we can do to control and manage and             |
        | sort of keep track of and organize that data is put data inside of things         |
        | called arrays.                                                                    |
        |                                                                                   |
        | Arrays is really useful because it's basically a container where we can           |
        | store a piece of information. Small amount of Information - Huge Amount of        |
        | Information. Let's say I had a like of bunch of name or a list of a bunch of      |
        | numbers that I needed to keep track of. I wouldn't want to have to create a       |
        | hundred different variables to store all of those different numbers, and this     |
        | is where arrays come in.                                                          |
        |                                                                                   |
        | Arrays is a data structure where we can store bunch of of different data values,  |
        | hundreds of thousands of values inside of a single array.         
        | 
        | int randomNumbers[] = {element, element, element};
        -------------------------------------------------------------------------------------
    
    */
    
    // 1- Create an arrays of numbers
    int randomNumbers[] = {4, 5, 9, 15, 24,78, 89, 90, 123};

    // Access arrays by index method
    printf("%d\n", randomNumbers[1]);
    

    // 2- Create an arrays of numbers
    int randomNumbers[10];
    
    randomNumbers[1] = 200;
    randomNumbers[0] = 150;

    // Access arrays by index method
    printf("%d\n", randomNumbers[0]);


    return 0;
}