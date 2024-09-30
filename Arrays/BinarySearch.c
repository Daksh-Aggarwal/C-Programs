#include <stdio.h>

int main()
{
    int i, j, n, num, temp, found = 0;

    printf("How many elements does your array have? ");
    scanf("%d", &n);

    int arr_1[n];
    int left = 0, right = n - 1;

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

    // Getting the required element from the user
    printf("Which element are you looking for? ");
    scanf("%d", &num);

    // Binary Search Code
    while(left <= right){
        int middle = (left + (right - left) / 2);

        if (arr_1[middle] == num){
            printf("Match found at index '%d'.\n", middle);
            found = 1;
            break;
        }
        else if (num < arr_1[middle]){
            right = middle - 1;
        }
        else{
            left = middle + 1;
        }
    }

    if (!found){
        printf("Match not found!\n");
    }

    return 0;
}
