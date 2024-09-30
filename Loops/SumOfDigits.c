#include <stdio.h>

int main()
{
    int n, d, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(d != 0){
        d = n % 10;
        sum += d;
        n = n / 10;
    }
    printf("The sum of digits is %d.", sum);

    return 0;
}