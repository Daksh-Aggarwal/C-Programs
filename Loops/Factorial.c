#include <stdio.h>

int main(){
    int i, n, result = 1;
    printf("Enter the number for which the factorial is required: ");
    scanf("%d", &n);

    for(i=n; i>0; i--){
        result *= i; 
    } 
    printf("The factorial of %d is %d.", n, result);
    return 0;
}