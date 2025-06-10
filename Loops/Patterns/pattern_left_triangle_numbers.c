/*
1
12
123
1234
12345
*/

// Description: Prints a left-aligned triangle pattern of increasing numbers using nested loops.
// Concepts used: Nested loops, user input, pattern printing

#include <stdio.h>

int main(){
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}