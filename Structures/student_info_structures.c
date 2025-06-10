// Description: Stores and displays student information (name, roll number, marks) using structures and arrays.
// Concepts used: Structures, arrays, user input, loops

#include <stdio.h>

struct studentInfo{
    char name[64];
    int roll_number;
    float marks;
};

int main(){

    int n;

    printf("How many students do you have? ");
    scanf("%d", &n);

    struct studentInfo student[n];

    for(int i = 0; i < n; i++){
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", student[i].name);
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &student[i].roll_number);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%f", &student[i].marks);
        printf("\n\n");
    }

    for(int i = 0; i < n; i++){
        printf("Student %d details:\n", i + 1);
        printf("Name: %s\n", student[i].name);
        printf("Roll number: %d\n", student[i].roll_number);
        printf("Marks: %f\n", student[i].marks);
        printf("\n\n");
    }

    return 0;
}