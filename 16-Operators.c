#include <stdio.h>
#include <stdlib.h>

    /* 
        ARITHMETIC OPERATORS
        -----------------------------------------
        | +     Addition
        | -     Subtraction
        | *     Multiplication
        | /     Division
        | %     Modulo 
        -----------------------------------------

        INCREMENT AND DECREMENT OPERATORS
        -----------------------------------------
        | i++   Post Increment
        | i--   Post Decrement
        | ++i   Pre Increment
        | --i   Pre Decrement
        -----------------------------------------
        
        ASSIGNMENT OPERATORS
        -----------------------------------------
        | =     a = b same as a = b
        | +=    a += b same as a = a + b 
        | -=    a -= b same as a = a - b 
        | *=    a *= b same as a = a * b 
        | /=    a /= b same as a = a / b 
        | %=    a %= b same as a = a % b 
        -----------------------------------------

        RELATIONAL OPERATORS
        -----------------------------------------
        | ==    Equal to 
        | >     Greater than
        | <     Less than
        | !=    Not equal to 
        | >=    Greater than or equal to 
        | <=    Less than or equal to 
        -----------------------------------------

        LOGICAL OPERATORS
        ---------------------------------------------------------------------
        | &&    Logical AND. True only if all operators are true
        | ||    Logical OR, Tue only if one operand is true
        | !     Logical NOT. True only if the operand is 0
        ---------------------------------------------------------------------

        BITWISE OPERATORS
        ---------------------------------------------------------------------
        | &     Bitwise AND
        | |     Bitwise OR 
        | ^     Bitwise exclusive OR 
        | ~     Bitwise complement
        | <<    Shift left
        | >>    Shift right 
        ---------------------------------------------------------------------

        ----------------------
        | Bitwise AND - The output of bitwise AND is 1 if the corresponding bits of two operands is 1. 
        | 1 & 1 = 1
        | 1 & 0 = 0
        | 0 & 1 = 0
        | 0 & 0 = 0
        ----------------------

        ----------------------
        | Bitwise OR - The output of bitwise OR is 1 if atleast one corresponding bit of two operands is 1.
        | 1 & 1 = 1
        | 1 & 0 = 1
        | 0 & 1 = 1
        | 0 & 0 = 0
        ----------------------

        ----------------------
        | Bitwise XOR - The result of bitwise XOR is 1 if the corresponding bits of two operands are opposite.
        | 1 & 1 = 0
        | 1 & 0 = 1
        | 0 & 1 = 1
        | 0 & 0 = 0
        ----------------------


    
*/

int main()
{
    // Arithmetic Operators //
    int a1 = 9, b1 = 4, result1;

    printf("Arithmetic Operators Result\n");
    result1 = a1 + b1;
    printf("result = %d\n", result1);
    result1 = a1 - b1;
    printf("result = %d\n", result1);
    result1 = a1 * b1;
    printf("result is %d\n", result1);
    result1 = a1 / b1;
    printf("Result = %d\n", result1);
    result1 = a1 % b1;
    printf("result = %d\n\n", result1);


    // Assignment Operators //
    int a = 5, result;

    printf("Assigment Operators Result\n");
    result = a;
    printf("result = %d\n", result);
    result += a;
    printf("result = %d\n", result);
    result -= a;
    printf("result = %d\n", result);
    result *= a;
    printf("result = %d\n", result);
    result /= a;
    printf("result = %d\n", result);
    result %=a;
    printf("result = %d\n\n", result);

    // Bitwise AND // 
    printf("Bitwise AND\n");
    int bit1 = 12, bit2 = 25;
    printf("Output = %d\n\n", bit1 & bit2);

    // Bitwise OR // 
    printf("Bitwise OR\n");
    int or1 = 12, or2 = 25;
    printf("Output = %d\n\n", or1 | or2);

    // Bitwis XOR // 
    printf("Bitwise XOP\n");
    int xor1 = 12, xor2 = 25;
    printf("Outout = %d\n\n", xor1 ^ xor2);

    return 0;
}

