// Program to convert Decimal numbers to any base (without function)

#include <stdio.h>

int main() {
    int num, k, i = 0, j, result[32];

    printf("Enter the decimal number: ");
    scanf("%d", &num);

    printf("Which base do you want to convert the decimal number into? ");
    scanf("%d", &k);
    
    while (num > 0) {
        result[i] = num % k;
        num = num / k;
        i++;
    }

    if(k == 2){
        printf("Binary: ");
    }
    else if(k == 8){
        printf("Octal: ");

    }
    else if(k == 16){
        printf("Hexadecimal: ");
    }
    else{
        printf("Result: ");
    }
    for (j = i - 1; j >= 0; j--)
        printf("%d", result[j]);
    printf("\n");

    return 0;
}