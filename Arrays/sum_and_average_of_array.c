// Description: Allows user to add elements at specific indices in an integer array, then computes and prints the sum and average.
// Concepts used: Arrays, loops, user input, conditional statements, summation, average calculation

// Adding an element 'a' at index 'b' to a custom array of 'n' elements

#include <stdio.h>

int main(){
    int a, b, n, i, sum = 0, avg;
    char c;

    printf("How many elements does your array (int) have? ");
    scanf("%d", &n);

    int arr_1[n];

// Initializing the array with empty elements as 0
    for(i = 0; i < n; i++){
        arr_1[i] = 0;
    }

// While loop to add new elements
    while(1){
        printf("\nAt what index do you want the new element to be added? ");
        scanf("%d", &a);
        if (a >= 0 && a < n){
            printf("\nWhat element do you want to add at index %d? (Avoid 0) ", a);
            scanf("%d", &b);

            arr_1[a] = b;
            printf("\nElement %d added at index %d.", b, a);

// Asking if the user wants to continue adding new elements
            printf("\n\nDo you wish to continue (Y/N)? ");
            scanf(" %c", &c);

            if (c == 'Y' || c == 'y'){
                continue;
            }
            else if (c == 'N' || c == 'n'){
                break;
            }
            else{
                printf("Invalid input! Terminating the program.");
                break;
            }
        }
        else{
            printf("Invalid index! Your index must lie between 0 and %d.\n", n-1);
        }
    }

// Printing the final array
// Note: If the user enters 0 as an element, the final print statement will consider it to be empty.
    printf("\n\nHere's your final array: \n");
    for(i=0; i < n; i++){
        if (arr_1[i] == 0){
            printf("Index %d element is empty.\n", i);
        }
        else{
            printf("Index %d element is %d.\n", i, arr_1[i]);
        }
    }

// Computing the sum and the average of the elements in the array
    for(i = 0; i < n; i++){
        sum += arr_1[i];
    }
    avg = sum/n;

    printf("\nThe sum of the elements in the array is %d.\n", sum);
    printf("The average of the elements in the array is %d.", avg);

    return 0;
}