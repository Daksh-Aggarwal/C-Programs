#include <stdio.h>

int main(){
    FILE *fs, *ft;
    char ch;

    fs = fopen("story.txt", "r");

    if(fs == NULL){ // In case the source file cannot be opened
        puts("Cannot open source file.");
        return 0;
    }

    ft = fopen("copy.txt", "w");

    if(ft == NULL){ // In case the source file cannot be opened
        puts("Cannot open target file.");
        fclose(fs);
        return 0;
    }

    while(1){
        ch = fgetc(fs);

        if(ch == EOF){
            break;
        }
        else{
            fputc(ch, ft);
        }
    }
    fclose(fs);
    fclose(ft);
    
    return 0;
}