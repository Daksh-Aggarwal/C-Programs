#include <stdio.h>

int main()
{
    int n, i, j, k, count = 0;

    printf("How many elements does your array have? ");
    scanf("%d", &n);

    int arr_1[n];

    for(i = 0; i < n; i++){
        printf("Enter the element: ");
        scanf("%d", &arr_1[i]);
    }

    for(i = 0; i < n - count; i++){
        for(j = i + 1; j < n - count; j++){
            if (arr_1[i] == arr_1[j]){
                for(k = j; k < n - 1 - count; k++){
                arr_1[k] = arr_1[k + 1];
                }
                count++;
            }
        }
    }

    for(i = 0; i < n - count; i++){
        printf("%d ", arr_1[i]);
    }

    return 0;
}