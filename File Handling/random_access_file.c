// Description: Demonstrates random access in a file using fseek, rewind, and ftell.
// Concepts used: File I/O, random file access, file pointer manipulation

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;

    file = fopen("story.txt", "w+");

    // Moving the write pointer to the 7th byte
    fseek(file, 7, SEEK_SET);
    fprintf(file, "C");

    // Moving the  read pointer to the beginning
    rewind(file);

    // Reading and displaying the file content
    char buffer[50];
    fgets(buffer, sizeof(buffer), file);
    printf("Updated file content: %s\n", buffer);

    // Getting the current file pointer position
    long pos = ftell(file);
    printf("File pointer position after reading: %ld\n", pos);

    fclose(file);
    return 0;
}
