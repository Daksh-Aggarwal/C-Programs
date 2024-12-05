#include <stdio.h>
#include <string.h>

int main() {
    char string_1[64], string_2[64];
    int isAnagram = 1;

    printf("Enter the two strings with a space between them: ");
    scanf("%s %s", string_1, string_2);

    if (strlen(string_1) != strlen(string_2)) {
        isAnagram = 0;
    } else {
        int frequency[256] = {0};

        for (int i = 0; i < strlen(string_1); i++) {
            frequency[(unsigned char)string_1[i]]++;
        }

        for (int i = 0; i < strlen(string_2); i++) {
            frequency[(unsigned char)string_2[i]]--;
        }

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
