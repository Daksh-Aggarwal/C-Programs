#include <stdio.h>

int main()
{
    int i, n;
    float max, min;

    printf("How many elements does your array have? ");
    scanf("%d", &n);

    float arr_1[n];

    for(i = 0; i < n; i++){
        printf("Enter the array element: ");
        scanf("%f", &arr_1[i]);
    }   

    max = arr_1[0];
    min = arr_1[0];

// Checking for maximum
    for(i=0; i<n; i++){
        if(arr_1[i]>max){
            max = arr_1[i];
        }
    }

    printf("The maximum element in the array is %f.\n", max);

// Checking for minimum
    for(i=0; i<n; i++){
        if(arr_1[i]<min){
            min = arr_1[i];
        }
    }

    printf("The minimum element in the array is %f.\n", min);

    return 0;
}