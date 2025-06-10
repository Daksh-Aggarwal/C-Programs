// Description: Computes and prints the transpose of a user-input matrix.
// Concepts used: 2D arrays, nested loops, matrix transpose, user input

#include <stdio.h>

int main()
{   
    int i, j, a, b;
    
    printf("Enter the order of the matrix (eg. 2 x 2): ");
    scanf("%d x %d", &a, &b);

    int arr[a][b];    

    printf("Please enter the matrix elements.\n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("\nEnter the (%d, %d)th element: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix is: \n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n\n");
    }

    printf("The transposed matrix is: \n");
    for(j = 0; j < a; j++){
        for(i = 0; i < b; i++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}