// Description: Calculates the sum of digits of a number using a loop.
// Concepts used: Loops, user input, arithmetic operations, modular arithmetic

#include <stdio.h>

int main()
{
    int n, d, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(d != 0){
        d = n % 10;
        sum += d;
        n = n / 10;
    }
    printf("The sum of digits is %d.", sum);

    return 0;
}