#include <stdio.h>

int main(){
    FILE *fp = fopen("random.txt", "r");
    char string[64];
    int wordCount = 0;

    while(!feof(fp)){
        if(fscanf(fp, "%s", string) == 1) wordCount++;
    }

    printf("Word count: %d", wordCount);
    fclose(fp);
    return 0;
}