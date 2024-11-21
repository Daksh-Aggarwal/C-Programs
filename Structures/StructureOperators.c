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