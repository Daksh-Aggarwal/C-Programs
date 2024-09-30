#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the value of 'a' and 'b' with a space between them: ");
    scanf("%d %d", &a, &b);

    c = a;
    a = b;
    b = c;

    printf("The new values of 'a' and 'b' respectively are %d and %d.", a, b);

    return 0;
}