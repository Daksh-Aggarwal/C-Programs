// Description: Demonstrates passing and returning arrays using pointers in functions.
// Concepts used: Pointers, arrays, function arguments, return values

#include <stdio.h>

void ptr(int *a, int len){
    for(int i = 0; i < len; i++){
        a[i] = a[i] * 10;
    }
}

int main(){
    int array[] = {1, 2, 3, 4, 5};
    
    ptr(array, sizeof(array)/4);

    for(int i = 0; i < sizeof(array)/4; i++){
        printf("%d ", array[i]);
    }

    return 0;
}