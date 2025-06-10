// Description: Demonstrates string input, length, comparison, concatenation, and copy using standard library functions.
// Concepts used: Strings, user input, string functions (strlen, strcmp, strcat, strcpy)

#include <stdio.h>
#include <string.h>

void main()
{

    char name[25], random[] = "apple";

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Name = %s \n", name);
    printf("Length = %d \n", strlen(name));
    printf("%d\n", strcmp(name, random));
    printf("%s\n", strcat(name, random));
    strcpy(name, random);
    printf("%s", name);
}