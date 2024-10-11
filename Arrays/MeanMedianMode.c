#include <stdio.h>

int main()
{
    int n, i, j, temp, sum = 0, max = 0, count = 0, mode = -1;
    float mean, median;

    printf("How many elements does your array have? ");
    scanf("%d", &n);

    int arr_1[n];

    for(i = 0; i < n; i++){
        printf("Enter the element: ");
        scanf("%d", &arr_1[i]);
        sum += arr_1[i];
    }

// Sorting the array
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if (arr_1[j] > arr_1[j + 1]){
                temp = arr_1[j];
                arr_1[j] = arr_1[j + 1];
                arr_1[j + 1] = temp; 
            }
        }
    }  

// Finding the mean
    mean = (float)sum/n;
    
// Finding the median
    if(n % 2 == 0){
        median = ((float)(arr_1[(n/2) - 1] + arr_1[(n/2)])/2);
    }
    else{
        median = arr_1[((n+1)/2) - 1];
    }

// Finding the mode
    for(i = 0; i < n; i++){
        count = 1;
        for(j = i + 1; j < n; j++){
            if (arr_1[i] == arr_1[j]){
                count++;
            }
        }
        if (count > max){
            max = count;
            mode = arr_1[i];    
        }
    }

// Printing the sorted array
    printf("Here's the sorted array: ");
    for(i = 0; i < n; i++){
    printf("%d ", arr_1[i]);
    }

// Printing the mean, median and mode
    printf("\nMean = %.2f", mean);
    printf("\nMedian = %.2f", median);
    if(max == 1){
        printf("\nMode = None");
    }
    else{
        printf("\nMode = %d", mode);
    }

    return 0;
}