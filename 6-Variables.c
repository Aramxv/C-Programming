#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Define a variable, 
    // char - collection of characters
    // int - integer
    char CharacterName[] = "Arjie";
    int CharacterAge = 23;

    printf("There once was a man named %s\n", CharacterName);
    printf("he wass %d years old.\n", CharacterAge);

    CharacterAge = 20;
    printf("He really liked the name %s\n", CharacterName);
    printf("but did not like being %d.\n", CharacterAge);

    return 0;
}