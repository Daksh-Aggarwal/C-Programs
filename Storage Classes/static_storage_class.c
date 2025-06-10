// Description: Demonstrates the use of the 'static' storage class to retain variable value between function calls.
// Concepts used: Storage classes, static, function calls, variable lifetime

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