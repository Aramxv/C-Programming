#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 
        -----------------------------------------------------
        | 1. Get using prompt, the information to the user  |
        | 2. Store it in a variable                         |
        | 3. Show the information to the user               |
        -----------------------------------------------------

        scanf() is allowing the user to input something into the program

        --first arguement is what type of data you are allowing the user to input
        --second arguement is where do you want to store that data after the user inputs
            
        scanf("%d", &bankNumber);
                |            |
                - Data type  - Pointer

        --Whenever you are creating a string of characters, you always need the open and close square brackets inside
        --To specify how many characters you want to be able to store inside the string of characters
        char name[20]; // 20 basically means this will be able to store 20 characters
    */
    /* */
    int bankNumber;
    printf("Enter your bank number: ");
    scanf("%d", &bankNumber);

    printf("Your Bank Number is %d. Awesome!\n", bankNumber);


    double gpa; 
    printf("Enter your gpa this semester: ");
    scanf("%lf", &gpa);
    
    printf("Your gpa this semester is %f\n", gpa);
    
    char grade;
    printf("Enter your grade bigboy: ");
    scanf("%c", &grade);

    printf("Your grade bigboy is: %c\n", grade);
    
    char name[20];
    printf("Please enter your name: ");
    scanf("%s", name);

    printf("Your name is %s\n", name);
    
    // Solution in the problem of scanf --getting only the first word of the name of the user
    // But the downside of this approach is it is getting a newline 
    char name[20];
    printf("Please enter your name: ");
    fgets(name, 20, stdin);

    printf("Your name is %s\n", name);


    


    return 0;
}