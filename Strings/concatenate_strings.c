// Description: Concatenates two user-input strings and displays the result.
// Concepts used: Strings, user input, string concatenation, standard library functions

#include <stdio.h>
#include <string.h>

int main(){

    char input_1[32], input_2[32];

    printf("Enter the first string: ");
    scanf(" %s", input_1);

    printf("Enter the second string: ");
    scanf(" %s", input_2);

    printf("Here's the concatenated string: %s", strcat(input_1, input_2));

    return 0;
}