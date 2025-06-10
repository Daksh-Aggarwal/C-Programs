// Description: Demonstrates nested structures to manage student records within multiple sections, including dynamic memory allocation.
// Concepts used: Structures, nested structures, dynamic memory allocation, arrays, user input

#include <stdio.h>
#include <stdlib.h>

struct studentInfo {
    char name[64];
    int rollNumber;
    float marks;
};

struct sections {
    int section;
    struct studentInfo *studentInfo;
};

int main() {
    int sections, students;

    printf("Enter number of sections: ");
    scanf("%d", &sections);

    printf("Enter number of students in each section: ");
    scanf("%d", &students);

    struct sections section[sections];

    // Allocate memory for students in each section
    for (int i = 0; i < sections; i++) {
        section[i].section = i + 1;
        section[i].studentInfo = malloc(students * sizeof(struct studentInfo));
        }

    // Input student details
    for (int i = 0; i < sections; i++) {
        printf("Enter details for section %d:\n", section[i].section);
        for (int j = 0; j < students; j++) {
            printf("Name: ");
            scanf("%s", section[i].studentInfo[j].name);
            printf("Roll number: ");
            scanf("%d", &section[i].studentInfo[j].rollNumber);
            printf("Marks: ");
            scanf("%f", &section[i].studentInfo[j].marks);
            printf("\n");
        }
        printf("\n");
    }

    // Print student details
    for (int i = 0; i < sections; i++) {
        printf("Details for section %d:\n", section[i].section);
        for (int j = 0; j < students; j++) {
            printf("Name: %s\n", section[i].studentInfo[j].name);
            printf("Roll number: %d\n", section[i].studentInfo[j].rollNumber);
            printf("Marks: %.2f\n", section[i].studentInfo[j].marks);
        }
        printf("\n");
    }

    for (int i = 0; i < sections; i++) {
        free(section[i].studentInfo);
    }

    return 0;
}