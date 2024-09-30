#include <stdio.h>

int main()
{
    int a, b;
    double result;
    printf("Enter the values of 'a' and 'b' with a space between them: ");
    scanf("%d %d", &a, &b);

    result = (double)a/b;
    printf("The result is %lf.", result);

}