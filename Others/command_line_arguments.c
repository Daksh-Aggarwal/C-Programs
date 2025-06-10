/*
argc (argument count):

This is an integer that represents the number of command-line arguments passed to the program, including the program's name.

argv (argument vector):

This is an array of strings (char*) that holds the command-line arguments.
*/

// Description: Demonstrates the use of command-line arguments (argc, argv) in C.
// Concepts used: Command-line arguments, argc, argv, loops

#include <stdio.h>

int main(int argc, char* argv[])
{
    printf("You have entered %d arguments:\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}