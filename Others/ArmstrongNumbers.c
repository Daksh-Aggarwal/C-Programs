#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, digit, temp, digits = 0, sum = 0;

    printf("Enter the integer: ");
    scanf("%d", &num);

    temp = num;

// Counting digits
    while(num != 0){
        num /= 10;
        digits++;
    }

// Resetting the number
    num = temp;

// Finding the sum of digits to the power of no. of digits
    while(num != 0){
        digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

// Resetting the number
    num = temp;

    if (sum == num){
        printf("The number is an armstrong number.");
    }
    else{
        printf("The number is not an armstrong number.");
    }
    
    return 0;
}