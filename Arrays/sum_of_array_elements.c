// Description: Calculates the sum of 10 integers entered by the user and prints the result.
// Concepts used: Arrays, loops, user input, summation

#include <stdio.h>

int main()
{
    int i, sum = 0, arr[10];

    for(i=0; i<=9; i++){
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
    }
    for(i=0; i<=9; i++){
        sum += arr[i];
    }

    printf("The sum is %d.", sum);

    return 0;
}