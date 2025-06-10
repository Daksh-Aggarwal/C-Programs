// Description: Manages student marks for a dynamic number of subjects using structures and dynamic memory allocation,
// with grade and percentage calculation.
// Concepts used: Structures, dynamic memory allocation, arrays, user input, functions, conditional statements

#include <stdio.h>
#include <stdlib.h>

struct marks{
    float *subjectMarks;
};

struct studentInfo{
    int rollNumber;
    struct marks marks;
    float totalMarks;
    float Percentage;
    char Grade;
};

void getData(int students, int subjects, struct studentInfo student[]){
    for(int i = 0; i < students; i++){
        printf("Enter the details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &student[i].rollNumber);
        student[i].marks.subjectMarks = (float*)malloc(subjects * sizeof(float));
        for(int j = 0; j < subjects; j++){
        while(1){
            printf("Marks in subject %d: ", j + 1);
            scanf("%f", &student[i].marks.subjectMarks[j]);
            if(student[i].marks.subjectMarks[j] > 100 || student[i].marks.subjectMarks[j] < 0){
                printf("Invalid input! Please try again.\n");
                continue;
            }
            break;  
        }
        }
        printf("\n");
    }
}

void displayData(int students, int subjects, struct studentInfo student[]){
    for(int i = 0; i < students; i++){
        printf("Details for student %d:\n", i + 1);
        printf("Roll number: %d\n", student[i].rollNumber);
        for(int j = 0; j < subjects; j++){
            printf("Marks in subject %d: %.2f\n", j + 1, student[i].marks.subjectMarks[j]);
        }
        printf("Total marks: %.2f\n", student[i].totalMarks);
        printf("Total Percentage: %.2f%%\n", student[i].Percentage);
        printf("Grade: %c\n", student[i].Grade);
        printf("\n\n");
    }
}

void totalMarks(int students, int subjects, struct studentInfo student[]){
    for(int i = 0; i < students; i++){
        student[i].totalMarks = 0;
        for(int j = 0; j < subjects; j++){
            student[i].totalMarks += student[i].marks.subjectMarks[j];
        }
    }
}

void percentageCalculation(int students, int subjects, struct studentInfo student[]){
    for(int i = 0; i < students; i++){
        student[i].Percentage = (student[i].totalMarks/subjects);
    }
}

void gradeCalculation(int students, struct studentInfo student[]){
    for(int i = 0; i < students; i++){
        if(student[i].Percentage >= 90){
            student[i].Grade = 'A';
        }
        else if(student[i].Percentage >= 70){
            student[i].Grade = 'B';
        }
        else if(student[i].Percentage >= 50){
            student[i].Grade = 'C';
        }
        else if(student[i].Percentage >= 30){
            student[i].Grade = 'D';
        }
        else{
            student[i].Grade = 'F';
        }
    }
}

void highestPercentage(int students, struct studentInfo student[]){
    float highest = student[0].Percentage;
    int highestScorer = 0;
    for(int i = 0; i < students; i++){
        if(student[i].Percentage > highest){
            highest = student[i].Percentage;
            highestScorer = i;
        }
    }
    printf("Highest Percentage: %.2f%%\nSecured by roll number %d.\n", highest, student[highestScorer].rollNumber);
}

int main(){

    int students, subjects;
    printf("How many students are there? ");
    scanf("%d", &students);

    printf("How many subjects does each student have? ");
    scanf("%d", &subjects);

    struct studentInfo student[students];
    struct marks marks[subjects];

    getData(students, subjects, student);
    totalMarks(students, subjects, student);
    percentageCalculation(students, subjects, student);
    gradeCalculation(students, student);
    displayData(students, subjects, student);
    highestPercentage(students, student);

    return 0;
}