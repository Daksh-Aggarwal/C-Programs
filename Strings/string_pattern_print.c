/*
U N 
U N I V 
U N I V E R 
U N I V E R S I 
U N I V E R S I T Y 
U N I V E R S I T Y 
U N I V E R S I 
U N I V E R 
U N I V 
U N
*/

// Description: Prints a pattern using characters from a string in increasing and decreasing order.
// Concepts used: Strings, loops, pattern printing, string indexing

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