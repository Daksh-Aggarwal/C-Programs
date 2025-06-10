// Description: Takes user input and writes it to a file until an empty line is entered.
// Concepts used: File I/O, user input, string handling, loops

#include <stdio.h>
#include <string.h>

int main(){

    FILE *fs;
    char s[64];

    fs = fopen("file.txt", "w");

    while(strlen(gets(s))> 0){
        fputs(s, fs);
        fputc('\n', fs);
    }
    fclose(fs);

    return 0;
}