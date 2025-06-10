// Description: Demonstrates the basics of unions by storing and displaying values of different data types in a union.
// Concepts used: Unions, memory sharing, user input, data types, standard I/O

#include <stdio.h>

union U{
    int i;
    float flt;
    char ch[4];
};

int main(){

    union U u;

    printf("Enter the value of i: ");
    scanf("%d", &u.i);
    printf("Enter the value of flt: ");
    scanf("%f", &u.flt);
    printf("Enter the value of ch: ");
    scanf("%s", u.ch);

    printf("i: %d\n", u.i);
    printf("flt: %f\n", u.flt);
    printf("ch: %s\n", u.ch);

    return 0;
}