// Description: Demonstrates the use of the 'extern' storage class for global variable access across functions.
// Concepts used: Storage classes, extern, global variables, function calls

#include <stdio.h>

int i;

int increment(){
    i++; 
    printf("i = %d\n", i); 
    }

int decrement(){
    i--; 
    printf("i = %d\n", i);
    }

int main(){

    printf("i = %d\n", i);

    increment(); 
    increment();

    decrement(); 
    decrement();

    return 0;
}