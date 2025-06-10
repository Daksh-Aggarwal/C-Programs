// Description: Explores the differences between pointers of various data types and their arithmetic.
// Concepts used: Pointers, pointer arithmetic, data types, memory addresses

#include <stdio.h>

int main(){
    int integer = 1;

    printf("Unsigned int: %u\nPointer (address in memory): %p\nHexadecimal integers: %x\n", &integer, &integer, &integer);

    return 0;
}