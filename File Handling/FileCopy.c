#include <stdio.h>

int main(){
    FILE *fs, *ft;
    char ch;

    fs = fopen("pr1.c", "r");

    if(fs == NULL){ // In case the source file cannot be opened
        puts("Cannot open source file.");
        exit(1); // Non-zero exit value indicates abnormal termination
    }

    ft = fopen("pr2.c", "w");

    if(ft == NULL){
        puts("Cannot open target file.");
        fclose(fs);
        exit(2);
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