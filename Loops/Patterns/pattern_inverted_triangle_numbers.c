/* 
12345
1234
123
12
1 
*/

// Description: Prints a right-aligned triangle pattern of asterisks using nested loops.
// Concepts used: Nested loops, user input, pattern printing

#include <stdio.h>

int main(){
    int i, j, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=n; i>0; i--){
        for(j=1; j<=i; j++){
            printf("%d", j);
            }  
        printf("\n");
        }
    return 0;
    }