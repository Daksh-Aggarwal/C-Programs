#include <stdio.h>

int FibonacciSeries(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return FibonacciSeries(n - 1) + FibonacciSeries(n - 2);
}

int main(){
    int n;

    printf("How many elements of the series should be printed? ");
    scanf("%d", &n);

    printf("Here's the requested series:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", FibonacciSeries(i));
    }

    return 0;

}