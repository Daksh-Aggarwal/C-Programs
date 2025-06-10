// Description: Calculates the factorial of a number using a recursive function.
// Concepts used: Recursion, functions, user input, factorial calculation

#include <stdio.h>

int factorial(int n){

    if(n == 0 || n == 1){
        return 1;
    }
    
    return n * factorial(n - 1);
}

int main(){
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("The factorial of %d is %d.", n, factorial(n));

    return 0;

}