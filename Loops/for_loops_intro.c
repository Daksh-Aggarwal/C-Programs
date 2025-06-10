// Description: Demonstrates the use of for loops with various examples.
// Concepts used: For loops, user input, iteration

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=0; i<=n; i++){
        printf("%d\n", i);
    }

    return 0;
}