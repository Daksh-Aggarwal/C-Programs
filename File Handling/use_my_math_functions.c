// Description: Demonstrates the use of custom math functions defined in another file.
// Concepts used: Functions, modular programming, function calls

#include <stdio.h>
#include "my_math_functions.c"

int main(){

    int a, b;
    printf("Enter the value of a and b with a space between them: ");
    scanf("%d %d", &a, &b);

    printf("The sum of a and b is %d.\n", add(a, b));
    printf("The difference of a and b is %d.", subtract(a, b));
    
    return 0;
}