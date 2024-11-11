#include <stdio.h>

int i;

int increment(){
    i++; 
    printf("i = %d\n", i); 
    }

int decrement(){
    i--; 
    printf("i = %d\n", i);
    }

int main(){

    printf("i = %d\n", i);

    increment(); 
    increment();

    decrement(); 
    decrement();

    return 0;
}