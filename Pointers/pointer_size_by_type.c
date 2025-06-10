// Description: Shows the size of pointers for different data types.
// Concepts used: Pointers, sizeof operator, data types

#include <stdio.h>

int main(){

    int *a;
    float *b;
    char *c;

    printf("The size of int pointer variable is %d.\n", sizeof(a));
    printf("The size of float pointer variable is %d.\n", sizeof(b));
    printf("The size of char pointer variable is %d.", sizeof(c));

    return 0;
}