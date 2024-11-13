#include <stdio.h>
#include <string.h>

int main(){

    char input_1[32], input_2[32];

    printf("Enter the first string: ");
    scanf(" %s", input_1);

    printf("Enter the second string: ");
    scanf(" %s", input_2);

    printf("%d", strcmp(input_1, input_2));

    return 0;
}