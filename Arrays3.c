// A die is rolled 600 times. Find the frequency of each occurrence.

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
    int i, j, arr[600], count[6];

    srand(time(0));

    for(i=0; i<=599; i++){
        arr[i] = (rand() % 6) + 1;
    }

    for(i=0; i<=5; i++){
        count[i] = 0;
    }

    for(i=0; i<=599; i++){
        if (arr[i] == 1){
            count[0] += 1;
        }
        if (arr[i] == 2){
            count[1] += 1;
        }
        if (arr[i] == 3){
            count[2] += 1;
        }
        if (arr[i] == 4){
            count[3] += 1;
        }
        if (arr[i] == 5){
            count[4] += 1;
        }
        if (arr[i] == 6){
            count[5] += 1;
        }
    }

    for(i=0; i<=5; i++){
        printf("The frequency of %d is %d.\n", i, count[i]);
    }

    return 0;
}