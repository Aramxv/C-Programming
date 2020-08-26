#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    printf("%d\n", num);

    num = 3;
    printf("%d\n", num);

    // Constant is a variable that cannot be change or modified
    // A read-only variable
    const int FAV_NUMBER = 5;
    printf("%d\n", FAV_NUMBER);
    return 0;
}