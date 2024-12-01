#include <stdio.h>
#include <string.h>

int main(){

    FILE *fp;
    char s[80];

    fp = fopen("story.txt", "r");

    while(fgets(s, 80, fp) != NULL){
        printf("%s", s);
    }

    fclose(fp);

    return 0;
}