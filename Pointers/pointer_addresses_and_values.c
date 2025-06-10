// Description: Prints the addresses and values of variables using pointers.
// Concepts used: Pointers, memory addresses, dereferencing, data types

#include <stdio.h>

int main(){
    int integer = 1;
    float flt = 1.00;
    char character = 'a';

    printf("Addresses:\nInt: %p\nFloat: %p\nChar: %p\n\n", &integer, &flt, &character);
    printf("Values:\nInt: %d\nFloat: %f\nChar: %c\n", *(&integer), *(&flt), *(&character));

    return 0; 
}