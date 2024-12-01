#include <stdio.h>
#include <string.h>

int main(){

    FILE *fs;
    char s[64];

    fs = fopen("poem.txt", "w");

    while(strlen(gets(s))> 0){
        fputs(s, fs);
        fputc('\n', fs);
    }
    fclose(fs);

    return 0;
}