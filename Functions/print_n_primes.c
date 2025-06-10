// Description: Prints the first n prime numbers using a function.
// Concepts used: Functions, loops, prime number checking, user input

#include <stdio.h>
#include <math.h>

void nPrimes(int n, int arr[]){
    int i = 0, j = 2;
    while(i < n){
        int isPrime = 1;
        for(int k = 2; k <= sqrt(j); k++){
            if(j % k == 0){
                isPrime = 0;
                break;
        }
        }
        if (isPrime){
            arr[i] = j;
            i++;
        }
        j++;
    }
}

int main(){

    int n;

    printf("How many primes do you want to print? ");
    scanf("%d", &n);

    int arr[n];

    nPrimes(n, arr);

    printf("Here are the requested prime numbers: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}