// Description: Checks if a number is even or odd using the ternary operator.
// Concepts used: Ternary operator, user input, conditional statements

#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    n%2==0?printf("%d is even.", n):printf("%d is odd.", n);

    return 0;
}