// Description: Demonstrates a function calling another function (recursive call to main).
// Concepts used: Functions, recursion, function calls

#include <stdio.h>

int message();

int main()
{
    message();

}

int message(){
    printf("\nCan't imagine life without C");
    main();
}