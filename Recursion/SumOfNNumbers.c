#include <stdio.h>

int summation(int n){
    if (n == 0){
        return 0;
    }
    return n + summation(n - 1);
}

int main(){

    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("%d", summation(n));

    return 0;
}