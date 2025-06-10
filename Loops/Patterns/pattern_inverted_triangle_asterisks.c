/*
* * * * * 
* * * *
* * *
* *
*
*/

// Description: Prints an inverted triangle pattern of asterisks using nested loops.
// Concepts used: Nested loops, user input, pattern printing

#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = n; j >= i; j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}