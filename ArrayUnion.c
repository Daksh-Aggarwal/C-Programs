#include <stdio.h>

int main()
{
    int i, j, n1, n2, count = 0;
    
    printf("How many elements does your first array have? ");
    scanf("%d", &n1);
    
    int arr_1[n1];

    for(i = 0; i < n1; i++){
        printf("Enter the element: ");
        scanf("%d", &arr_1[i]);
    }

    printf("How many elements does your second array have? ");
    scanf("%d", &n2);
    
    int arr_2[n2];

    for(i = 0; i < n2; i++){
        printf("Enter the element: ");
        scanf("%d", &arr_2[i]);
    }

    int arr_3[n1 + n2];

    for(i = 0; i < n1; i++){
        arr_3[i] = arr_1[i]; 
    }

    // Add elements of arr_2 to arr_3, only if they are not already in arr_1
    for(i = 0; i < n2; i++){
        int found = 0;
        // Check if arr_2[i] is already in arr_1
        for(j = 0; j < n1; j++){
            if (arr_2[i] == arr_1[j]){
                found = 1;
                break;
            }
        }
        // If not found, add it to arr_3
        if (!found){
            arr_3[n1 + count] = arr_2[i];
            count++;
        }
    }

    printf("Here's the union of the two arrays: ");
    for(i = 0; i < n1 + count; i++){
        printf("%d ", arr_3[i]);
    }

    return 0;
}
