// Calculator

#include <stdio.h>

int main(){
    float a, b;
    char input;

    printf("Enter the operation you want to perform (eg. + - * /): ");
    scanf("%c", &input);

    printf("Enter the two numbers with a space between each (eg. 2 4): ");
    scanf("%f %f", &a, &b);

    switch(input){
        case('+'):
        printf("The sum is %f.", a + b); break;
        case('-'):
        printf("The difference is %f.", a - b); break;
        case('*'):
        printf("The product is %f.", a * b); break;
        case('/'):
        if (b != 0){
            printf("The result is %f.", a / b); break;
        }
        else{
            printf("Cannot divide by zero!");
        }

        default:
        printf("Invalid input! Please try again.");
    }

    return 0;
}