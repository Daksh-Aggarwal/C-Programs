/*
        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/

// Description: Prints a centered number pyramid pattern using nested loops.
// Concepts used: Nested loops, user input, pattern printing

#include <stdio.h>

int main()
{
    int i, j, spaces, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n - i; j++){
            printf("  ");
        }
        for(j = i; j >= 1; j--){
            printf("%d ", j);
        }
        for(j = 2; j <= i; j++){
            printf("%d ", j);
        }
    printf("\n");
    }

    return 0;
}