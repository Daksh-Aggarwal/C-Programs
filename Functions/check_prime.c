// Description: Checks whether a given number is prime using a function.
// Concepts used: Functions, loops, conditional statements, prime number checking

#include <stdio.h>
#include <math.h>

int isPrime(int n){
    int isPrime = 1, i;

    if(n == 0 || n == 1){
        isPrime = 0;
        return isPrime;
    }

    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}

int main(){
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (isPrime(num)){
        printf("The number is prime.");
    }
    else{
        printf("The number is composite.");
    }

    return 0;
}