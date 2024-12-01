#include <stdio.h>
#include <math.h>

int main(){
    FILE *file;

    int rollNumber, topper = -1, failures[1500], failureCount = 0, totalCount = 0;
    float marks, max = -1, min = 101, sum = 0, average, sd = 0;

    file = fopen("marks500.txt", "r");

    if(file == NULL){
        printf("Error while opening the file.");
        return 0;
    }

    while(1){
        fscanf(file, "%d", &rollNumber);
        if(rollNumber == -9999) break;
        totalCount++;
        fscanf(file, "%f", &marks);
        sum += marks;
        if(marks < min) min = marks;
        if(marks > max){
            max = marks;
            topper = rollNumber;
        }
        if(marks < 33){
            failures[failureCount] = rollNumber;
            failureCount++;
        }
    }

    average = sum/totalCount;
    rewind(file);

    while(1){
        fscanf(file, "%d", &rollNumber);
        if(rollNumber == -9999) break;
        fscanf(file, "%f", &marks);
        sd += pow((marks - average), 2);
    }
    sd /= totalCount;
    sd = sqrt(sd);

    fclose(file);

    printf("\n--- Results ---\n");
    printf("Average score: %.2f\n", average);
    printf("Standard deviation: %.2f\n", sd);
    printf("Max score: %.2f\n", max);
    printf("Min score: %.2f\n", min);
    printf("Topper: Roll number %d (Score: %.2f)\n", topper, max);
    printf("Failures:\n");
    for(int i = 0; i < failureCount; i++){
        printf("%d\t", failures[i]);
        if((i + 1) % 25 == 0) printf("\n");
    }
    printf("\n");

    return 0;
}