// Description: Demonstrates dynamic memory allocation with malloc and calloc, and freeing memory.
// Concepts used: Dynamic memory allocation, malloc, calloc, free, arrays, user input

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr_1, *ptr_2;
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    ptr_1 = (int*)malloc(n * sizeof(int));
    ptr_2 = (int*)calloc(n, sizeof(int));

    for(int i = 0; i < n; i++){
        ptr_1[i] = i + 1;
    }

    printf("The array elements are: \n");
    printf("MALLOC: ");
    for(int i = 0; i < n; i++){
        printf("%d ", ptr_1[i]);
    }
    printf("\nCALLOC: ");
    for(int i = 0; i < n; i++){
        printf("%d ", ptr_2[i]);
    }

    free(ptr_1);
    free(ptr_2);

    return 0;
}