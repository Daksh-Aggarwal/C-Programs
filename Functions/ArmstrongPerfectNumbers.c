// WIP

#include <stdio.h>
#include <math.h>

int isArmstrongNumber(int n){
    int digits = 0, digit, temp, sum = 0;

    temp = n;

    while(n > 0){
        digit = n % 10;
        n /= 10;
        digits++;
    }

    n = temp;

    while(n > 0){
        digit = n % 10;
        n /= 10;
        sum += pow(digit, digits);
    }

    n = temp;

    if(sum == n){
        printf("It is an armstrong number.");
    }
    else{
        printf("It is not an armstrong number.");
    }

}

int isPerfectNumber(int n){
    int i, sum = 0;

    for(i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    if(sum == n){
        printf("\nIt is a perfect number.");
    }
    else{
        printf("\nIt is not a perfect number.");
    }
}

int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    isArmstrongNumber(n);
    isPerfectNumber(n);

    return 0;
}
