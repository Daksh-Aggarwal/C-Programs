#include <stdio.h>
#include <math.h>

int main(){

    int bin, power = 0, digit, dec = 0;
    printf("Enter the binary number: ");
    scanf("%d", &bin);

    while(bin > 0){
        digit = bin % 10;
        dec += digit * pow(2, power);
        power++;
        bin /= 10;
    }

    printf("The decimal value of the input is %d.", dec);

    return 0;
}