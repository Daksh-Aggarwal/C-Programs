// Description: Counts the number of words in a text file using a loop with feof().
// Concepts used: File I/O, word reading, loops, counters, end-of-file detection

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