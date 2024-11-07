// WIP

#include <stdio.h>
#include <math.h>

int nPrimes(int n, int arr[]){
    int i = 1;
    while(i <= n){
        for(int j = 2; j < sqrt(i); j++){
            if(i % )
        }
    }

    return arr;
}

int main(){

    int n;

    printf("How many primes do you want to print? ");
    scanf("%d", &n);

    int arr[n];

    nPrimes(n, arr);

    printf("Here are the requested prime numbers: \n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}