#include <stdio.h>

int main()
{
    int i, j, n, next_num;

    printf("Enter the value of 'n': ");
    scanf("%d", &n);

    int arr_1[n];
    arr_1[0] = 0;
    arr_1[1] = 1;

    printf("0 1 ");

    for(i = 2; i < n; i++){
        arr_1[i] = arr_1[i - 1] + arr_1[i - 2];
        printf("%d ", arr_1[i]);
    }
}