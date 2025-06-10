// Description: Checks if a given string is a palindrome.
// Concepts used: Strings, loops, string comparison, conditional statements

#include <stdio.h>
#include <string.h>

int main(){

    char string[64];

    printf("Enter the string: ");
    scanf("%s", string);
    
    int length = strlen(string);

    char revString[length];

    for(int i = 0; i < length; i++){
        revString[i] = string[length - i - 1];
    }

    int isPalindrome = strcmp(string, revString);
    
    if (isPalindrome == 0) printf("The input string is an palindrome.");
    else printf("It is not a palindrome.");

    return 0;
}