// WIP

#include <stdio.h>

int main()
{
    int i, n, num, temp, found = 0;

    printf("How many elements does your array have? ");
    scanf("%d", &n);

    int arr_1[n];
    int left = 0, right = n - 1;

    for(i = 0; i < n; i++){
        printf("Enter the element: ");
        scanf("%d", &arr_1[i]);
    }

    for(i = 0; i < n; i++){
        if (arr_1[i] > arr_1[i + 1]){
            temp = arr_1[i];
            arr_1[i] = arr_1[i+1];
            arr_1[i + 1] = temp; 
        }
    }

    printf("Which element are you looking for? ");
    scanf("%d", &num);

    while(left <= right){
            int middle = (left + (right - left) / 2);

            if (arr_1[middle] == num){
                printf("Match found at index '%d'.", middle);
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
    if(!found){
        printf("Match not found!\n");
    }

    return 0;
    }