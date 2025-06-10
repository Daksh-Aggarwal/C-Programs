// Description: Swaps two numbers without using a temporary variable, using a function.
// Concepts used: Functions, arithmetic operations, swapping variables

#include <stdio.h>

int swap(int a, int b, int arr[]){
    // a = 5, b = 1
    a = a + b; // a = 6
    b = a - b; // b = 6 - 1 = 5
    a =  a - b; // a = a - b = 1

    arr[0] = a;
    arr[1] = b;
}

int main(){
    int a, b, arr[2];

    printf("Enter the two numbers with the space between them: ");
    scanf("%d %d", &a, &b);

    printf("You entered:\na = %d\nb = %d", a, b);

    swap(a, b, arr);

    printf("\nSwapped values:\na = %d\nb = %d", arr[0], arr[1]);

    return 0;
}