// Description: Reads ages of 10 students, finds and prints the average, minimum, and maximum age.
// Concepts used: Arrays, loops, user input, floating-point arithmetic, comparison operators

// Read from user ages of all students in class and save them in an array which can store floating point and find average, minimum, and maximum age.

#include <stdio.h>

int main()
{
// Initializing the variables and arrays
    int i, j = 0;
    float max, min, sum = 0, avg, arr[10];

// Getting the ages from the user
    for(i=0; i<=9; i++){
        printf("Enter the age: ");
        scanf("%f", &arr[i]);
    }

// Checking for maximum
    for(i=0; i<=9; i++){
        j = i + 1;
        if(arr[i]>arr[j]){
            max = arr[i];
        }
        else{
            max = arr[j];
        }
    printf("The maximum age entered is %f.\n", max);
    }

// Checking for minimum
    for(i=0; i<=9; i++){
        j = i + 1;
        if(arr[i]<arr[j]){
            min = arr[i];
        }
        else{
            min = arr[j];
        }
    printf("The minimum age entered is %f.\n", min);
    }

// Finding the average
    for(i=0; i<=9; i++){
        sum += arr[i];
    }
    printf("The sum is %f.\n", sum);
    avg = sum/10;
    printf("The average is %f.\n", avg);

    return 0;
}