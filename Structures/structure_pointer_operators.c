// Description: Demonstrates the use of structure pointers and the arrow operator to access structure members.
// Concepts used: Structures, pointers, arrow operator, memory addresses

#include <stdio.h>

struct A{
    int i;
};

int main(){

    struct A a, *b;

    a.i = 99;
    b = &a;
    printf("Value: %d\nAddress: %p\n", a.i, b->i);

    return 0;
}