// Description: Rotates a user-input integer array left or right by a specified number of times, based on user choice.
// Concepts used: Arrays, loops, array rotation, user input, conditional statements

// With dynamic arrays and choice of direction

#include <stdio.h>

int main()
{
    int i, j, temp, n, k;
    char direction;

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

    printf("\nIn which direction do you want to perform the rotation? (L/R) ");
    scanf(" %c", &direction);

    if (k > n){
        k %= n;
    }

    if(direction == 'L' || direction == 'l'){
        for(i = 0; i < k; i++){
            temp = sample[0];
            for(j = 0; j < n - 1; j++){
                sample[j] = sample[j + 1];
            }
            sample[n - 1] = temp;
        }
        printf("Rotating towards the left...\n");
    }

    else if(direction == 'R' || direction == 'r'){
        for(i = 0; i < k; i++){
            temp = sample[n - 1];
            for(j = n - 1; j > 0; j--){
                sample[j] = sample[j - 1];
            }
            sample[0] = temp;
        }
        printf("Rotating towards the right...\n");
    }

    for(i = 0; i < n; i++){
        printf("%d ", sample[i]);
    }

    return 0;
}