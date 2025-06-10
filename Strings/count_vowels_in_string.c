// Description: Counts the number of vowels in a user-input string.
// Concepts used: Strings, user input, loops, character comparison

#include <stdio.h>
#include <string.h>

int main(){

    char string[64];
    char vowels[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u', '\0'};
    int count = 0;
    
    printf("Enter the string: ");
    scanf("%s", string);

    for(int i = 0; i < strlen(string); i++){
        for(int j = 0; j < strlen(vowels); j++){
            if(string[i] == vowels[j]){
                count += 1;
            }
        }
    }

    printf("The no. of vowels in the entered string is %d.", count);

    return 0;
}