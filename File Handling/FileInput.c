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