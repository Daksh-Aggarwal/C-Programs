// With dynamic arrays

#include <stdio.h>

int main()
{
    int i, j, temp, n, k;

    printf("How many elements does your array have? ");
    scanf("%d", &n);
    
    int sample[n];

    for(i = 0; i < n; i++){
        printf("Enter the array element: ");
        scanf("%d", &sample[i]);
    }

    printf("Here's your entered array: \n");
    for(i = 0; i < n; i++){
        printf("%d ", sample[i]);
    }

    printf("\nHow many rotations do you want to perform? ");
    scanf("%d", &k);

    if (k > n){
        k %= n;
    }

    for(i = 0; i < k; i++){
        temp = sample[0];
        for(j = 0; j < n - 1; j++){
        sample[j] = sample[j + 1];
        }
        sample[n - 1] = temp;
    }

    printf("Rotating towards the left...\n");
    for(i = 0; i < n; i++){
        printf("%d ", sample[i]);
    }

    return 0;
}