#include <stdio.h>
#include "MyMathFunctions.c"

int main(){

    int a, b;
    printf("Enter the value of a and b with a space between them: ");
    scanf("%d %d", &a, &b);

    printf("The sum of a and b is %d.\n", add(a, b));
    printf("The difference of a and b is %d.", subtract(a, b));
    
    return 0;
}