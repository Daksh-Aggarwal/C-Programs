// Description: Calculates the minimum number of currency notes needed for a given amount.
// Concepts used: Arithmetic operations, division, modulus, user input

#include <stdio.h>

int main(){

    int n, remainder, hundreds, fifties, tens, fives, twos, ones;
    printf("Enter the amount: ");
    scanf("%d", &n);

    hundreds = n / 100;
    remainder = n % 100;
    fifties = remainder / 50;
    remainder %= 50;
    tens = remainder / 10;
    remainder %= 10;
    fives = remainder / 5;
    remainder %= 5;
    twos = remainder / 2;
    remainder %= 2;
    ones = remainder / 1;
    remainder %= 1;

    printf("100s: %d\n50s: %d\n10s: %d\n5s: %d\n2s: %d\n1s: %d\n", hundreds, fifties, tens, fives, twos, ones);

    return 0;
}