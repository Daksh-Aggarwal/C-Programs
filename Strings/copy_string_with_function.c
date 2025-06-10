// Description: Copies a string to another using the strcpy function.
// Concepts used: Strings, string copy, standard library functions

#include <stdio.h>
#include <string.h>

int main(){

    char string[64] = "blah blah";
    char copyString[64];

    strcpy(copyString, string);

    printf("%s", copyString);

    return 0;
}