// Copying strings without the use of strcopy from string.h functions

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