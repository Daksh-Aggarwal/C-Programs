// Description: Prints the multiplication table of a user-specified number using a loop.
// Concepts used: Loops, user input, arithmetic operations

#include <stdio.h>

int main(){
    int i, n;

    printf("Which multiplication table do you need? ");
    scanf("%d", &n);

    printf("TABLE OF %d\n", n);

    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}