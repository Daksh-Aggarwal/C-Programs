#include <stdio.h>

int main()
{
    int i, j, n, temp;

    printf("How many elements does your array have? ");
    scanf("%d", &n);

    int arr_1[n];

    // Getting the array elements from the user
    for(i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr_1[i]);
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

    printf("Here's your sorted array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr_1[i]);
    }
    return 0;
}