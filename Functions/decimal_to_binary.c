// Description: Converts a decimal number to its binary representation using a function.
// Concepts used: Functions, loops, number systems, modular arithmetic

#include <stdio.h>

void DecimalToBinary(int n){
    int arr[32], i = 0;

    if(n == 0) {
        printf("0");
        return;
    }

    while(n > 0){
        arr[i] = n % 2;
        n /= 2;
        i++;
    }

    for(int j = i - 1; j >= 0; j--){
        printf("%d", arr[j]);
    }
}

int main(){
    int n;

    printf("Enter the decimal number: ");
    scanf("%d", &n);

    DecimalToBinary(n);

    return 0;
}