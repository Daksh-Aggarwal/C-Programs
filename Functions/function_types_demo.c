// Description: Demonstrates different types of functions (void, int, float, char) and their usage.
// Concepts used: Functions, user input, return types, function calls

#include <stdio.h>

void voidFunction(){
// Nothing will be returned in a void function
}

int intFunction(){
    int var;

    printf("Enter a number (integer): ");
    scanf("%d", &var);

    return var;
}

float floatFunction(){
    float var;

    printf("Enter a number (float): ");
    scanf("%f", &var);

    return var;
}

char charFunction(){
    char var;

    printf("Enter a character: ");
    scanf(" %c", &var);

    return var;
}

int main(){
    int var1;
    float var2;
    char var3;

    var1 = intFunction();
    var2 = floatFunction();
    var3 = charFunction();

    printf("%d | %f | %c", var1, var2, var3);

    return 0;
}