#include <stdio.h>
#include <string.h>

int main(){
    char string[64] = "UNIVERSITY";

    // printf("Enter the string: ");
    // scanf("%s", string);
    for(int i = 2; i < strlen(string); i += 2){
        printf(string + i);
    }

    return 0;
}