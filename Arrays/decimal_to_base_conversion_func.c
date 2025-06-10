// Description: Converts a decimal number to another base (binary, octal, hexadecimal, or custom base) using a function.
// Concepts used: Arrays, loops, user input, functions, number systems, modular arithmetic

// Program to convert Decimal numbers to any base (with function)

#include <stdio.h>

    int Conversion(int num, int base) {
        int result[32];
        int i = 0, j;
        
        while (num > 0) {
            result[i] = num % base;
            num = num / base;
            i++;
        }

        if(base == 2){
            printf("Binary: ");
        }
        else if(base == 8){
            printf("Octal: ");

        }
        else if(base == 16){
            printf("Hexadecimal: ");
        }
        else{
            printf("Result: ");
        }
        for (j = i - 1; j >= 0; j--)
            printf("%d", result[j]);
        printf("\n");
    }


    int main() {
        int num, k;
        printf("Enter the decimal number: ");
        scanf("%d", &num);

        printf("Which base do you want to convert the decimal number into? ");
        scanf("%d", &k);

        Conversion(num, k);

    return 0;
}