#include <stdio.h>

int main(){
    int words = 0, chars = 0, tabs = 0, spaces = 0, lines = 0;
    int inWord = 0;
    char ch;
    FILE *fp;
    fp = fopen("story.txt", "r");

    while(1){
        ch = fgetc(fp);
        
        if(ch == EOF){
            break;
        }
        
        chars++;

        if(ch == ' ' || ch == '\t' || ch == '\n'){
            inWord = 0;
            if(ch == '\t') tabs++;
            if(ch == ' ') spaces++;
            if(ch == '\n') lines++;
        }
        else if(!inWord){
            inWord = 1;
            words++;
        }
    }
        fclose(fp);

        printf("No. of words = %d\nNo of. characters = %d\nNo. of tabs = %d\nNo. of spaces = %d\nNo. of lines = %d\n", words, chars, tabs, spaces, lines);

        return 0;
}