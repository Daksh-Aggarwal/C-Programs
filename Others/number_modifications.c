// Description: Demonstrates increment, decrement, multiplication, division, and modulus operations on a number.
// Concepts used: Arithmetic operations, user input, assignment operators

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    a += 1;
    printf("Incremented value of a: %d\n", a);
    
    a -= 2;
    printf("Decremented value of a: %d\n", a);
    
    a *= 3;
    printf("New value of a: %d\n", a);
    
    a /= 5;
    printf("New value of a: %d\n", a);

    a %= 2;
    printf("New value of a: %d\n", a);

    return 0;
}