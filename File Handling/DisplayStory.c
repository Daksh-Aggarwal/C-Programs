#include <stdio.h>

int main(){
    FILE *fp;

    fp = fopen("story.txt", "r");

    char ch;

    while(1){
        ch = fgetc(fp);
        if(ch == EOF){
            break;
        }
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}