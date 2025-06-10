// Description: Rotates a fixed-size integer array to the left by a user-specified number of times.
// Concepts used: Arrays, loops, array rotation, user input

#include <stdio.h>

int main()
{
    int i, sample[3] = {123, 231, 312}, temp, n;

    printf("How many rotations do you want to perform? ");
    scanf("%d", &n);

    if (n > 3){
        n %= 3;
    }

    for(i = 0; i < n; i++){
        temp = sample[0];
        sample[0] = sample[1];
        sample[1] = sample[2];
        sample[2] = temp;
    }

    printf("Rotating towards the left...\n");
    for(i = 0; i < 3; i++){
        printf("%d ", sample[i]);
    }

    return 0;
}