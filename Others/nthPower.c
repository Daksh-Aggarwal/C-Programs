#include <stdio.h>

int main(){
    int i, n, power, result = 1;

    printf("Enter the number and the power with a space between them: ");
    scanf("%d %d", &n, &power);

    for(i = 0; i < power; i++){
        result *= n;
    }

    printf("The result is %d.", result);

    return 0;
}