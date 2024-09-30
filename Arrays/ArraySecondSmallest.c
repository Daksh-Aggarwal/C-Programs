// Program to find the second smallest number in an array

#include <stdio.h>

int main()
{
    int i, arr_1[5] = {1, 2, 3, 4, 5}, min, second_min;

    min = arr_1[0];
    second_min = arr_1[0];

    for(i = 1; i < 5; i++){
        if(arr_1[i] < min){
            min = arr_1[i];
        }
    }

    for(i = 0; i < 5; i++){
        if(arr_1[i] > min){
            if(second_min == min || arr_1[i] < second_min){
                second_min = arr_1[i];
            }
        }
    }
    
    printf("The second smallest number is %d.", second_min);
    return 0;
}