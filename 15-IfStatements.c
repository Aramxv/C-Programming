#include <stdio.h>
#include <stdlib.h>\

    /* 
        ---------------------------------
        | If Statement practice         |
        | Check which number is greates |
        ---------------------------------
    */

int max(int num1, int num2);
int maxofThreeNum(int firstNum, int secNum, int ThirdNum);


int main()
{
    printf("%d\n\n", max(3,10));

    printf("%d\n", maxofThreeNum(2,3,1));

    return 0;
}

int max(int num1, int num2)
{
    int result;
    if(num1 > num2) 
    { 
        result = num1; 
    }
    else 
    { 
        result = num2; 
    }

    return result; 

}


int maxofThreeNum(int firstNum, int secNum, int ThirdNum)
{
    int result;

    if (firstNum >= secNum && firstNum >= ThirdNum)
    {
        result = firstNum;
    }
    else if(secNum >= firstNum && secNum >= ThirdNum)
    {
        result = secNum;
    }
    else
    {
        result = ThirdNum;
    }

    return result;
    
}