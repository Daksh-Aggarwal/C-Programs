// Description: Allows the user to insert elements at specific indices in an integer array, with repeated insertions.
// Concepts used: Arrays, user input, loops, conditional statements

// Adding an element 'a' at index 'b' to a custom array of 'n' elements

#include <stdio.h>

int main(){
    int a, b, n, i;
    char c;

    printf("How many elements does your array (int) have? ");
    scanf("%d", &n);

    int arr_1[n];

// Initializing the array with empty elements as -999
    for(i = 0; i < n; i++){
        arr_1[i] = -999;
    }

// While loop to add new elements
    while(1){
        printf("\nAt what index do you want the new element to be added? ");
        scanf("%d", &a);
        if (a >= 0 && a < n){
            printf("\nWhat element do you want to add at index %d? (Avoid -999) ", a);
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
// Note: If the user enters -999 as an element, the final print statement will consider it to be empty.
    printf("\n\nHere's your final array: \n");
    for(i=0; i < n; i++){
        if (arr_1[i] == -999){
            printf("Index %d element is empty.\n", i);
        }
        else{
            printf("Index %d element is %d.\n", i, arr_1[i]);
        }
    }
    return 0;
}