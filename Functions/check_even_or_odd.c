// Description: Determines whether a given number is even or odd using a function.
// Concepts used: Functions, conditional statements, user input

#include <stdio.h>

int func_1(int a){
    if (a % 2 == 0){
        printf("The number is even.");
    }
    else{
        printf("The number is odd.");
    }
}

int main()
{   
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    func_1(n);

    return 0;
}