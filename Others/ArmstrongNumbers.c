#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, d, digits = 0, sum = 0;

    printf("Enter the integer: ");
    scanf("%d", &n);

    for(i = 0;;i++){
        d = n / 10;
        n /= 10;
        digits += 1;

        if (n == 0){
            break;
        }
    }

    for(i = 1; i <= digits; i++){
        d = n / 10;
        n /= 10;
        sum += pow(d, 3);
    }

    if (sum == n){
        printf("The number is an armstrong number.");
    }
    else{
        printf("The number is not an armstrong number.");
    }
    
    return 0;
}