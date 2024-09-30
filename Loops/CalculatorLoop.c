#include <stdio.h>
#include <math.h>

int main()
{
    float num_1, num_2;
    char operation, repeat;

    while(1){
        printf("Enter the two numbers with a space between them: ");
        scanf("%f %f", &num_1, &num_2);

        printf("Which operation do you want to perform? (+, -, *, /, ^)");
        scanf(" %c", &operation);     

        if (operation == '+'){
            printf("The sum is %f.", num_1 + num_2);
        }
        else if (operation == '-'){
            printf("The difference is %f.", num_1 - num_2);
        }
        else if (operation == '*'){
            printf("The product is %f.", num_1 * num_2);
        }
        else if (operation == '/'){
            printf("The result is %f.", num_1 / num_2);
        }
        else if (operation == '^'){
            printf("The result is %f.", pow(num_1, num_2));
        }
        else{
            printf("Invalid operator! Try again.");
        }
    
    printf("\nDo you want to use the calculator again (Y/N)? ");
    scanf(" %c", &repeat);
    if (repeat == 'Y' || repeat == 'y'){
        continue;
    }
    else if (repeat == 'N' || repeat == 'n'){
        printf("Thank you for using the calculator.");
        break;        
    }
    }
    return 0;
}