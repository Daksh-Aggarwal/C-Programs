// Calculator with loop using switch case

#include <stdio.h>

int main(){
    float a, b;
    char input, cont;

    while(1){
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
        printf("\nDo you want to continue (Y/N)? ");
        scanf(" %c", &cont);

        if (cont == 'Y' || cont == 'y'){
            continue;
        }
        else if (cont == 'N' || cont == 'n'){
            printf("Thank you for using the calculator.");
            break;
        }
        else{
            printf("Invalid input! Please try again.");
            break;
        }
    }

    return 0;
}