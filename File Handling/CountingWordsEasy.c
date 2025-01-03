#include <stdio.h>

int main(){
    FILE *fp = fopen("file1.txt", "r");
    int wordCount = 0;
    char string[256];

    while(1){
        if((fscanf(fp, "%s", string)) == 1) wordCount++;
        else{
            break;
        }
    }

    printf("Word Count: %d", wordCount);

    fclose(fp);

    return 0;
}