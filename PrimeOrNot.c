#include <stdio.h>
#include <math.h>

int main(){
    int i, n, prime;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1){
        printf("It is neither prime nor composite.");
    }
    else{
        for(i=2; i <= sqrt(n); i++){
            if (n % i == 0){
                prime = 0;
                break;
        }
    }
    if (prime == 0){
        printf("It is a composite number.");
    }
    else{
        printf("It is a prime number.");
    }
    }
    return 0;
}