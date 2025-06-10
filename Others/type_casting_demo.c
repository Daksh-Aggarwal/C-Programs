// Description: Demonstrates type casting in C by converting integers to double for division.
// Concepts used: Type casting, arithmetic operations, user input

#include <stdio.h>

int main()
{
    int a, b;
    double result;
    printf("Enter the values of 'a' and 'b' with a space between them: ");
    scanf("%d %d", &a, &b);

    result = (double)a/b;
    printf("The result is %lf.", result);

}