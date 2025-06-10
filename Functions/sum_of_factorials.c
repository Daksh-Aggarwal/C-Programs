// 1!/1 + 2!/2 + 3!/3 + ....

// Description: Calculates the sum of factorials of numbers up to a given limit using functions.
// Concepts used: Functions, loops, factorial calculation, summation

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

    int n;
    float sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += (factorial(i)/i);
    }

    printf("%.2f", sum);

    return 0;
}