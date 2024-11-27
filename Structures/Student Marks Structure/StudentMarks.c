#include <stdio.h>

struct studentInfo{
    int rollNumber;
    float marks_subject1;
    float marks_subject2;
    float marks_subject3;
    float totalMarks;
    float Percentage;
    char Grade;
};

void getData(int n, struct studentInfo student[]){
    for(int i = 0; i < n; i++){
        printf("Enter the details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &student[i].rollNumber);
        while(1){
            printf("Marks in subject 1: ");
            scanf("%f", &student[i].marks_subject1);
            if(student[i].marks_subject1 > 100 || student[i].marks_subject1 < 0){
                printf("Invalid input! Please try again.\n");
                continue;
            }
            printf("Marks in subject 2: ");
            scanf("%f", &student[i].marks_subject2);
            if(student[i].marks_subject2 > 100 || student[i].marks_subject2 < 0){
                printf("Invalid input! Please try again.\n");
                continue;
            }
            printf("Marks in subject 3: ");
            scanf("%f", &student[i].marks_subject3);
            if(student[i].marks_subject3 > 100 || student[i].marks_subject3 < 0){
                printf("Invalid input! Please try again.\n");
                continue;
            }
            break;
        }
        printf("\n");
    }
}

void displayData(int n, struct studentInfo student[]){
    for(int i = 0; i < n; i++){
        printf("Details for student %d:\n", i + 1);
        printf("Roll number: %d\n", student[i].rollNumber);
        printf("Marks in subject 1: %.2f\n", student[i].marks_subject1);
        printf("Marks in subject 2: %.2f\n", student[i].marks_subject2);
        printf("Marks in subject 3: %.2f\n", student[i].marks_subject3);
        printf("Total marks: %.2f\n", student[i].totalMarks);
        printf("Total Percentage: %.2f%%\n", student[i].Percentage);
        printf("Grade: %c\n", student[i].Grade);
        printf("\n\n");
    }
}

void totalMarks(int n, struct studentInfo student[]){
    for(int i = 0; i < n; i++){
        student[i].totalMarks = (student[i].marks_subject1 + student[i].marks_subject2 + student[i].marks_subject3);
    }
}

void percentageCalculation(int n, struct studentInfo student[]){
    for(int i = 0; i < n; i++){
        student[i].Percentage = (student[i].totalMarks/3);
    }
}

void gradeCalculation(int n, struct studentInfo student[]){
    for(int i = 0; i < n; i++){
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

void highestPercentage(int n, struct studentInfo student[]){
    float highest = student[0].Percentage;
    int highestScorer = 1;
    for(int i = 0; i < n; i++){
        if(student[i].Percentage > highest){
            highest = student[i].Percentage;
            highestScorer = i;
        }
    }
    printf("Highest Percentage: %.2f\nSecured by roll number %d.\n", highest, student[highestScorer].rollNumber);
}

int main(){

    int n;
    printf("How many students are there? ");
    scanf("%d", &n);

    struct studentInfo student[n];

    getData(n, student);
    totalMarks(n, student);
    percentageCalculation(n, student);
    gradeCalculation(n, student);
    displayData(n, student);
    highestPercentage(n, student);

    return 0;
}