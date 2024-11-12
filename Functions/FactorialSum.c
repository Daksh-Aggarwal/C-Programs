// 1!/1 + 2!/2 + 3!/3 + ....

#include <stdio.h>

int factorial(int n){
    int i, result = 1;
    i = n;

    while(i > 0){
        result *= i;
        i--;
    }

    return result;
}

int main(){

    int n;
    float sum = 0;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += (factorial(i)/i);
    }

    printf("%.2f", sum);

    return 0;
}