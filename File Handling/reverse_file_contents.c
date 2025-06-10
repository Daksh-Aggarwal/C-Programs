// Description: Reads a file and writes its contents in reverse order to another file.
// Concepts used: File I/O, file pointer manipulation, loops, reverse writing

#include <stdio.h>

int main(){
    FILE *file = fopen("file.txt", "rb"); // Should also work with "r"
    FILE *reverse = fopen("reverse.txt", "wb"); // Should also work with "w"

    fseek(file, 0, SEEK_END);
    int length = ftell(file);

    fseek(file, -1, SEEK_CUR);

    while(length > 0){
        char ch = fgetc(file);
        fputc(ch, reverse);

        fseek(file, -2, SEEK_CUR);

        length--;
    }

    fclose(file);
    fclose(reverse);
    return 0;
}