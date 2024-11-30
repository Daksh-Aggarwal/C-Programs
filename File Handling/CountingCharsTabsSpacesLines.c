#include <stdio.h>

int main(){
    int chars = 0, tabs = 0, spaces = 0, lines = 0;
    char ch;
    FILE *fp;
    fp = fopen("story.txt", "r");

    while(1){
        ch = fgetc(fp);
        
        if(ch == EOF){
            break;
        }
        chars++;
        if(ch == '\t') tabs++;
        if(ch == ' ') spaces++;
        if(ch == '\n') lines++;
    }
        fclose(fp);

        printf("No of. characters = %d\nNo. of tabs = %d\nNo. of spaces = %d\nNo. of lines = %d\n", chars, tabs, spaces, lines);

        return 0;
}