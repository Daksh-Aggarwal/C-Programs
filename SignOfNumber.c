#include <stdio.h>

int main()
{   
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n<0){
        printf("%d is negative.", n);
    }
    if (n>0){
        printf("%d is positive.", n);
    }
    else{
        printf("You entered zero!");
    }
    return 0;
}