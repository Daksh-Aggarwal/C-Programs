#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    ptr = (int*)calloc(n, sizeof(int));

    printf("The array elements are: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", ptr[i]);
    }

    return 0;
}