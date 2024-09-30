#include <stdio.h>

int main(){
    int i, n, num, max, min;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("Enter a number: ");
        scanf("%d", &num);

        if(i == 1){
            max = num;
            min = num;
        }
        if(num > max){
            max = num;
        }
        if (num < min){
            min = num;
        }
    }

    printf("The range of the entered numbers is %d-%d.", min, max);

    return 0;
}