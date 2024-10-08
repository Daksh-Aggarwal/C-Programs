#include <stdio.h>

int main()
{   
    int i, j, k, m1, m2, n1, n2;
    
    printf("Enter the order of the first matrix (eg. 2 x 2): ");
    scanf("%d x %d", &m1, &n1);

    printf("Enter the order of the second matrix (eg. 2 x 2): ");
    scanf("%d x %d", &m2, &n2);

    int arr_1[m1][n1], arr_2[m2][n2], arr_3[m1][n2];    

    if(n1 == m2){
        for(i = 0; i < m1; i++){
            for(j = 0; j < n2; j++){
                arr_3[i][j] = 0;
            }
        }

        printf("Please enter the first matrix's elements.\n");
        for(i = 0; i < m1; i++){
            for(j = 0; j < n1; j++){
                printf("\nEnter the (%d, %d)th element: ", i, j);
                scanf("%d", &arr_1[i][j]);
            }
        }

        printf("Please enter the second matrix's elements.\n");
        for(i = 0; i < m2; i++){
            for(j = 0; j < n2; j++){
                printf("\nEnter the (%d, %d)th element: ", i, j);
                scanf("%d", &arr_2[i][j]);
            }
        }

        printf("The first matrix is: \n");
        for(i = 0; i < m1; i++){
            for(j = 0; j < n1; j++){
                printf("%d\t", arr_1[i][j]);
            }
            printf("\n\n");
        }

        printf("The second matrix is: \n");
        for(i = 0; i < m2; i++){
            for(j = 0; j < n2; j++){
                printf("%d\t", arr_2[i][j]);
            }
            printf("\n\n");
        }

        for(i = 0; i < m1; i++){
            for(j = 0; j < n2; j++){
                for(k = 0; k < n1; k++){
                    arr_3[i][j] += arr_1[i][k] * arr_2[k][j];
                }
            }
        }

        printf("Product of the two matrices: \n");
        for(i = 0; i < m1; i++){
            for(j = 0; j < n2; j++){
                printf("%d\t", arr_3[i][j]);
            }
            printf("\n\n");
        }

    }

    else{
        printf("\nMultiplication of the entered matrices is not possible!");
    }


    return 0;
}