#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int i,j,arr[7]={0};

    srand(time(0)); // For a random seed each time

    for (i=0;i<600;i++){
        j=rand()%6; // rand()%RAND_MAX
        j=j+1; // As 'j' ranges from 0 to 5
        arr[j]++;
    }

    for(i=1;i<=6;i++)
        printf("%d came out for %d times\n",i,arr[i]);

    return 0;
}