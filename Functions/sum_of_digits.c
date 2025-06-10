// Description: Calculates the sum of digits of a number using a function.
// Concepts used: Functions, loops, modular arithmetic

#include <stdio.h>

int SumOfDigits(int n){
    int sum = 0, digit;
    
    while(n > 0){
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    return sum;
}

int main(){
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("The sum of the digits of the entered number is %d.", SumOfDigits(n));

    return 0;
}