#include <stdio.h>

int factorial(int n){
    int i, result = 1;
    i = n;

    while(i > 0){
        result *= i;
        i--;
    }

    return result;
}

int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("The factorial of %d is %d.", num, factorial(num));

    return 0;
}