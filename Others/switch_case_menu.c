// Description: Demonstrates the use of switch-case statements for menu selection.
// Concepts used: Switch-case, user input, conditional statements

#include <stdio.h>

int main(){
    int n;
    printf("Enter your year: ");
    scanf("%d", &n);

    switch(n){
        case(1):
        printf("Sheet 1"); break;
        case(2):
        printf("Sheet 2"); break;
        default:
        printf("Try again!");
    }

    return 0;
}