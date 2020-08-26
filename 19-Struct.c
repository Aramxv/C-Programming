#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{

    struct  Student TopStudent;
    {
        /* data */
        TopStudent.age = 23;
        TopStudent.gpa = 1.75;
        strcpy( TopStudent.name, "Jimboy Marquez");
        strcpy( TopStudent.major, "BS Computer Science");
    };

    printf("Name: %s\n", TopStudent.name);
    printf("Major: %s\n", TopStudent.major);
    printf("Age: %d\n", TopStudent.age);
    printf("GPA: %f\n", TopStudent.gpa);
    


    return 0; 
}