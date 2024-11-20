#include <stdio.h>

int main(){
    int integer = 1;

    printf("Unsigned int: %u\nPointer (address in memory): %p\nHexadecimal integers: %x\n", &integer, &integer, &integer);

    return 0;
}