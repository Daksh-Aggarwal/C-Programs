// Description: Demonstrates the use of the 'register' storage class for faster variable access in loops.
// Concepts used: Storage classes, register, loops, variable scope

#include <stdio.h>

int main(){

    register int i;

    for (i = 1 ; i <= 10 ; i++ ){
        printf("\n%d", i);
    }

    return 0;
}