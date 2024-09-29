// Assuming the fine is incurred on a daily basis

#include <stdio.h>

int main(){
    int n;
    float fine;

    printf("No. of days the member is late to return the book: ");
    scanf("%d", &n);

    if (n <= 5 && n >= 0){
        fine = n * 0.5;
        printf("Your total fine is Rs.%f.", fine);
    }
    else if (n >= 6 && n <= 10){
        fine = ((5 * 0.5) + ((n - 5) * 1));
        printf("Your total fine is Rs.%f.", fine);
    }
    else if (n > 10 && n <= 30){
        fine = ((5 * 0.5) + (5 * 1) + ((n - 10) * 5));
        printf("Your total fine is Rs.%f.", fine);
    }
    else if (n > 30){
        printf("Your membership has been cancelled.");
    }
    else{
        printf("Invalid input.");
    }

    return 0;
}