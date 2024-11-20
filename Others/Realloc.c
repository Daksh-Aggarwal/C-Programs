#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        ptr[i] = i + 1;
    }

    printf("The array elements are: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", ptr[i]);
    }

    printf("\n\nEnter the new size of array: ");
    scanf("%d", &n);

    ptr = (int*)realloc(ptr, n * sizeof(int));

    for(int i = 0; i < n; i++){
        ptr[i] = i + 1;
    }

    printf("The array elements are: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", ptr[i]);
    }

    return 0;
}