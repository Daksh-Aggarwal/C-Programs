// Description: Swaps two numbers using a temporary variable, implemented as a function.
// Concepts used: Functions, variable swapping, temporary variable

#include <stdio.h>

int swap(int a, int b, int arr[]){
    int temp;
    temp = a;
    a = b;
    b = temp;

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