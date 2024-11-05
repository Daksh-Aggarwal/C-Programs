// Program to store the name, age, and marks of two students and then displaying the information and also the average marks

#include <stdio.h>

struct student{
    char name[50];
    int age;
    float marks;
};

int main(){
    int i, n;

    printf("How many students are there? ");
    scanf("%d", &n);
    
    struct student student[n];

    for(i = 0; i < n; i++){
        printf("Input details for Student %d: \n", i+1);

        printf("Name: ");
        scanf("%s", &student[i].name);
        printf("Age: ");
        scanf("%d", &student[i].age);
        printf("Marks: ");
        scanf("%f", &student[i].marks);
    }

    for(i = 0; i < n; i++){
        printf("\nInformation for Student %d: \n", i+1);

        printf("Name: %s", student[i].name);
        printf("\tAge: %d", student[i].age);
        printf("\tMarks: %.2f", student[i].marks);
    }

    float sum = 0, average;
    for(i = 0; i < n; i++){
        sum += student[i].marks;
    }
    average = sum / n;

    printf("\n\nAverage marks: %f", average);

    return 0;
}