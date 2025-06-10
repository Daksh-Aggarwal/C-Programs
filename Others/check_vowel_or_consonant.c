// Description: Checks if a given character is a vowel or consonant.
// Concepts used: Conditional statements, character comparison, user input

#include <stdio.h>

int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("%c is a vowel.\n", c);
        } else {
            printf("%c is a consonant.\n", c);
        }
    } 
    else {
        printf("Error! %c is not an alphabet.\n", c);
    }

    return 0;
}
