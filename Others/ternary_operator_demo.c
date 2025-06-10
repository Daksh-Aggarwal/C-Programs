// Description: Demonstrates the use of the ternary operator for conditional assignment.
// Concepts used: Ternary operator, conditional statements, variable assignment

#include <stdio.h>

int main()
{
    int a = 3, b = 1, c;
    c = a>b?a:b;
    printf("The value of 'c' is %d.", c);

    return 0;
}