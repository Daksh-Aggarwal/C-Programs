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

#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i < 2 * n; i++){
        if(i > n){
            for(j = 2 * n - i; j > 0; j--){
                printf("* ");
            }
        }
        else{
            for(j = 1; j <= i; j++){
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}