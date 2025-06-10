// Description: Stores and displays names, roll numbers, and marks for multiple students using arrays.
// Concepts used: Arrays, loops, user input, strings, structured data

#include <stdio.h>

int main(){

    char names[64][64]; 
    int roll_numbers[64];
    float marks[64];

    for(int i = 0; i < 3; i++){
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &roll_numbers[i]);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &marks[i]);
        printf("\n\n");
    }

    for(int i = 0; i < 3; i++){
        printf("Student %d details:\n", i + 1);
        printf("Name: %s\n", names[i]);
        printf("Roll number: %d\n", roll_numbers[i]);
        printf("Marks: %f\n", marks[i]);
        printf("\n\n");
    }

    return 0;
}