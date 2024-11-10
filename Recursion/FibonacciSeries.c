// WIP

#include <stdio.h>

int FibonacciSeries(int n, int arr[]){
    

}

int main(){
    int n;

    printf("How many elements of the series should be printed? ");
    scanf("%d", &n);

    int arr[n];

    FibonacciSeries(n, arr);

    printf("Here's the requested series:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;

}