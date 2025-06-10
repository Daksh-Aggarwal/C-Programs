// Description: Demonstrates the use and scope of the 'auto' storage class in nested blocks.
// Concepts used: Storage classes, auto, variable scope, block scope

#include <stdio.h>

int main(){

    auto int i = 1;
    {
        auto int i = 2;
        {
            auto int i = 3;
            printf("\n%d", i);
        }
        printf("\n%d", i);
    }
    printf("\n%d", i);
    return 0;
}