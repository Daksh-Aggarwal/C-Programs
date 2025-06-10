// Description: Demonstrates how the addresses of adjacent elements in an array differ based on the data type size.
// Concepts used: Arrays, pointers, memory addresses, sizeof operator

#include <stdio.h>

int main(){
    int array[] = {1, 2, 3, 4, 5};

    // We notice that the difference between the addresses of two consecutive elements in an integer type array is 4 because the size of int is 4
    printf("Address of first element: %p\nAddress of second element: %p\n", &array[0], &array[1]);

    return 0;
}