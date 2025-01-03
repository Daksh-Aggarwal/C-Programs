#include <stdio.h>

int main(){
    FILE *fp = fopen("file1.txt", "r");
    char string[64];
    int wordCount = 0;

    while(!feof(fp)){
        if(fscanf(fp, "%s", string) == 1) wordCount++;
    }

    printf("Word Count: %d", wordCount);

    fclose(fp);
    
    return 0;
}