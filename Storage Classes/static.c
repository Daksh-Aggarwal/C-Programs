#include <stdio.h>

int increment(){
    static int i = 1;
    printf("%d\n", i);
    i++;
}

int main(){
    increment();
    increment();
    increment();
    
    return 0;
}