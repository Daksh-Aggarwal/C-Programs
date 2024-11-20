#include <stdio.h>

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int integer_1 = 1;
    int integer_2 = 2;
    
    swap(&integer_1, &integer_2);

    printf("Integer 1: %d\nInteger 2: %d", integer_1, integer_2);

    return 0;
}