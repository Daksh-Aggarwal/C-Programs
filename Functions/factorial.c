// Description: Calculates the factorial of a number using a function.
// Concepts used: Functions, recursion or loops, user input

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