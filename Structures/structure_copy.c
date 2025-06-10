// Description: Demonstrates copying data between structures, including complete and partial copy operations.
// Concepts used: Structures, arrays, string copy, user input, data copying

#include <stdio.h>
#include <string.h>

struct initial{
    char name[64];
    int id;
    float marks;
};

// Complete copy
struct copy_1{
    char name[64];
    int id;
    float marks;
};

// Partial copy
struct copy_2{
    char name[64];
    int id;
    float marks;
};

int main(){
    
    int n;

    printf("How many times do you want to input the data? ");
    scanf("%d", &n);

    struct initial initial[n];
    struct copy_1 copy_1[n];
    struct copy_2 copy_2[n];

    for(int i = 0; i < n; i++){
        printf("Enter the name for user %d: ", i + 1);
        scanf("%s", &initial[i].name);
        printf("Enter the ID for user %d: ", i + 1);
        scanf("%d", &initial[i].id);
        printf("Enter the marks for user %d: ", i + 1);
        scanf("%f", &initial[i].marks);
        printf("\n\n");
    }

    for(int i = 0; i < n; i++){
        strcpy(copy_1[i].name, initial[i].name);
        copy_1[i].id = initial[i].id;
        copy_1[i].marks = initial[i].marks;
        strcpy(copy_2[i].name, initial[i].name);
        copy_2[i].marks = initial[i].marks;
    }

    printf("Original structure:\n");
    for(int i = 0; i < n; i++){
        printf("Details for student %d:\n", i + 1);
        printf("Name: %s\n", initial[i].name);
        printf("ID: %d\n", initial[i].id);
        printf("Marks: %f\n", initial[i].marks);
        printf("\n\n");
    }

    printf("Completely copied structure:\n");
    for(int i = 0; i < n; i++){
        printf("Details for student %d:\n", i + 1);
        printf("Name: %s\n", copy_1[i].name);
        printf("ID: %d\n", copy_1[i].id);
        printf("Marks: %f\n", copy_1[i].marks);
        printf("\n\n");
    }

    printf("Partially copied structure:\n");
    for(int i = 0; i < n; i++){
    printf("Details for student %d:\n", i + 1);
    printf("Name: %s\n", copy_2[i].name);
    printf("ID: %d\n", copy_2[i].id);
    printf("Marks: %f\n", copy_2[i].marks);
    printf("\n\n");
    }

    return 0;
}