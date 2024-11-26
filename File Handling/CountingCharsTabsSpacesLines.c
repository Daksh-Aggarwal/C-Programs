#include <stdio.h>

int main(){
    int chars, tabs, spaces, lines;
    char ch;
    FILE *fp;
    fp = fopen("pr1.c", "r");

    while(1){
        ch = fgetc(fp);
        
        if(ch == EOF){
            break;
        }
        chars++;
        if(ch == '\t') tabs++;
        if(ch == ' ') spaces++;
        if(ch == '\n') lines++;

        fclose(fp);

        printf("No of. characters = %d\nNo. of tabs = %d\nNo. of spaces = %d\nNo. of lines = %d\n", chars, tabs, spaces, lines);

        return 0;
    }
}