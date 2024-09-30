#include <stdio.h>

int main()
{
    int i, n, num, found = 0;

    printf("How many elements does your array have? ");
    scanf("%d", &n);

    int arr_1[n];

    for(i = 0; i < n; i++){
        printf("Enter the array element: ");
        scanf("%d", &arr_1[i]);
    }

    printf("Which element are you searching for? ");
    scanf("%d", &num);

    for(i = 0; i < n; i++){
        if (arr_1[i] == num){
            found = 1;
            printf("Match found at index '%d'.\n", i);
        }
    }
    if (found!=1){
        printf("Match not found in the array!");
    }

    return 0;
}