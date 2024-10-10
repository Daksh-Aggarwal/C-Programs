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
        for(j = 0; j < n2; j++){
            if (arr_1[i] == arr_2[j]){
                arr_3[count] = arr_1[i];
                count++;
                break;
        }    
        }
    }

    if (count == 0){
        printf("No common elements found!");
    }
    else{
        printf("Here's the intersection of the two arrays: ");
        for(i = 0; i < count; i++){
        printf("%d ", arr_3[i]);
    }
    }

    return 0;
}