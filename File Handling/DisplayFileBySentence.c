#include <stdio.h>
#include <string.h>

int main(){

    FILE *fp;
    char s[128];

    fp = fopen("file1.txt", "r");

    while(fgets(s, 128, fp) != NULL){
        printf("%s", s);
    }

    fclose(fp);

    return 0;
}