#include <stdio.h>
#include <string.h>

int main() {
    char string_1[64], string_2[64];
    int isAnagram = 1;  // Assume the strings are anagrams initially

    printf("Enter the two strings with a space between them: ");
    scanf("%s %s", string_1, string_2);

    if (strlen(string_1) != strlen(string_2)) {
        isAnagram = 0;  // Not anagrams if lengths are different
    } else {
        int frequency[256] = {0};  // Frequency array for all ASCII characters

        // Update frequency for string_1
        for (int i = 0; i < strlen(string_1); i++) {
            frequency[(unsigned char)string_1[i]]++;
        }

        // Update frequency for string_2
        for (int i = 0; i < strlen(string_2); i++) {
            frequency[(unsigned char)string_2[i]]--;
        }

        // Check if all frequencies are zero
        for (int i = 0; i < 256; i++) {
            if (frequency[i] != 0) {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram) {
        printf("It is an anagram.\n");
    } else {
        printf("It is not an anagram.\n");
    }

    return 0;
}
