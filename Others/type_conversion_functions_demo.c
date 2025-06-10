// Description: Demonstrates type conversion functions (atof, atoi, itoa) and their usage.
// Concepts used: Type conversion, standard library functions, string manipulation

#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int a = 3;
    long b = 3.145;
    char buffer[20];
    char *s="3.145";
    printf("%s\n", s);

    printf("%f\n", atof(s));
    printf("%d\n", atoi(s));
    printf("%ld\n", atol(s));

    printf("The binary value is %s.\n", itoa(a, buffer, 2));
    printf("The binary value is %s.\n", ltoa(b, buffer, 2));

    return 0;
}