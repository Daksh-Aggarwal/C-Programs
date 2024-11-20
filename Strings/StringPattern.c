#include <stdio.h>
#include <string.h>

int main(){
    char string[64] = "UNIVERSITY";

    for(int i = 0; i <= strlen(string); i += 2){
        for(int j = 0; j < i; j++){
            printf("%c ", string[j]);
        }
        printf("\n");
    }

    for(int i = strlen(string); i >= 0; i -= 2){
        for(int j = 0; j < i; j++){
            printf("%c ", string[j]);
        }
        printf("\n");
    }

    return 0;
}