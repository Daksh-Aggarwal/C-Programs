#include <stdio.h>

int main()
{   
    int i, j, a, b;
    
    printf("Enter the order of the matrices (eg. 2 x 2): ");
    scanf("%d x %d", &a, &b);

    int arr_1[a][b], arr_2[a][b];    

    printf("Please enter the first matrix's elements.\n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("\nEnter the (%d, %d)th element: ", i, j);
            scanf("%d", &arr_1[i][j]);
        }
    }

    printf("Please enter the second matrix's elements.\n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("\nEnter the (%d, %d)th element: ", i, j);
            scanf("%d", &arr_2[i][j]);
        }
    }

    printf("The first matrix is: \n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("%d\t", arr_1[i][j]);
        }
        printf("\n\n");
    }

    printf("The first matrix is: \n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("%d\t", arr_2[i][j]);
        }
        printf("\n\n");
    }

    printf("Sum of the two matrices: \n");
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("%d\t", arr_1[i][j] + arr_2[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}