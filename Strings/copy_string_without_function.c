// Description: Copies a string to another without using standard library functions.
// Concepts used: Strings, loops, manual string copy, arrays

#include <stdio.h>
#include <string.h>

int main(){

    char string[64] = "blah blah";
    char copyString[64];

    for(int i = 0; i < strlen(string); i++){
        copyString[i] = string[i];
    }

    printf("%s", copyString);

    return 0;
}