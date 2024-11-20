#include <stdio.h>

struct struct_1{
    int ID;
    float marks;
};

struct struct_2{
    int ID;
    float marks;
};

struct temp{
    int ID;
    float marks;
};

int main(){

    int n;

    printf("How many times do you want to enter the details? ");
    scanf("%d", &n);
    
    struct struct_1 a[n];
    struct struct_2 b[n];
    struct temp temp[n];

    printf("For structure 1:\n");
    for(int i = 0; i < n; i++){
        printf("Enter the ID for student %d: ", i + 1);
        scanf("%d", &a[i].ID);
        printf("Enter the marks for student %d: ", i + 1);
        scanf("%f", &a[i].marks);
    }
    
    printf("For structure 2:\n");
    for(int i = 0; i < n; i++){
        printf("Enter the ID for student %d: ", i + 1);
        scanf("%d", &b[i].ID);
        printf("Enter the marks for student %d: ", i + 1);
        scanf("%f", &b[i].marks);
    }

    printf("Before swapping:\n");
    printf("Structure 1:\n");
    for(int i = 0; i < n; i++){
        printf("ID: %d\n", a[i].ID);
        printf("Marks: %f", a[i].marks);
        printf("\n\n");
    }
    printf("Structure 2:\n");
    for(int i = 0; i < n; i++){
        printf("ID: %d\n", b[i].ID);
        printf("Marks: %f", b[i].marks);
        printf("\n\n");
    }

// Swapping using a temp structure
    for(int i = 0; i < n; i++){
        temp[i].ID = a[i].ID;
        temp[i].marks = a[i].marks;
        a[i].ID = b[i].ID;
        a[i].marks = b[i].marks;
        b[i].ID = temp[i].ID;
        b[i].marks = temp[i].marks;
    }

    printf("After swapping:\n");
    printf("Structure 1:\n");
    for(int i = 0; i < n; i++){
        printf("ID: %d\n", a[i].ID);
        printf("Marks: %f", a[i].marks);
        printf("\n\n");
    }
    printf("Structure 2:\n");
    for(int i = 0; i < n; i++){
        printf("ID: %d\n", b[i].ID);
        printf("Marks: %f", b[i].marks);
        printf("\n\n");
    }

    return 0;
}