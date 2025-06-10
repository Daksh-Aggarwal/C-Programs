/*
    * 
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/

// Description: Prints a diamond pattern of asterisks with spaces using nested loops.
// Concepts used: Nested loops, user input, pattern printing, conditional statements

#include <stdio.h>

int main()
{
    int i, j, spaces, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i < 2*n; i++){
        if(i > n){
            spaces = i - n;
            for(j = 1; j <= spaces; j++){
                printf(" ");
            }
            for(j = 2 * n - i; j > 0; j--){
                printf("* ");
            }
        }
        else{
            spaces = n - i;
            for(j = 1; j <= spaces; j++){
                printf(" ");
            }
            for(j = 1; j <= i; j++){
                printf("* ");
            }
        }
        printf("\n");
    }

}