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

    int isAnagram = strcmp(string, revString);
    
    if (isAnagram == 0) printf("The input string is an palindrome.");
    else printf("It is not a palindrome.");

    return 0;
}