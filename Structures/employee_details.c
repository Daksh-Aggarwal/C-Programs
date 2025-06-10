// Description: Manages employee records using structures, including input, display, filtering by salary, and updating salary.
// Concepts used: Structures, arrays, functions, user input, conditional statements

// Structure is passed into a function

#include <stdio.h>

struct employee{
    int id;
    int age;
    float salary;
};

// Function to display the entered data
int displayData(int n, struct employee employee){
        printf("ID: %d\nAge: %d\nSalary: %.2f\n\n", employee.id, employee.age, employee.salary);
}

// Function to display data based on a cutoff salary
int displayDataBasedOnSalary(float cutoff, struct employee employee){
    if(employee.salary >= cutoff){
        printf("ID: %d\nAge: %d\nSalary: %.2f\n\n", employee.id, employee.age, employee.salary);
    }
}

// Function to update the salary of a particular employee
int updateSalary(int employeeID, float newSalary, struct employee employee){
    employee.salary = newSalary;
    printf("Updated salary to %f for employee with ID %d.\n", newSalary, employeeID);
    printf("Updated details for employee with ID %d:\n", employeeID);
    printf("ID: %d\nAge: %d\nSalary: %.2f\n\n", employee.id, employee.age, employee.salary);
}

int main(){

    int n;

    printf("How many employees do you have? ");
    scanf("%d", &n);

    struct employee employee[n];

    // Getting input for each employee
    for(int i = 0; i < n; i++){
        printf("Enter the ID of the employee: ");
        scanf("%d", &employee[i].id);
        printf("Enter the age of the employee: ");
        scanf("%d", &employee[i].age);
        printf("Enter the salary of the employee: ");
        scanf("%f", &employee[i].salary);
        printf("\n");
    }

    // Displaying the data
    for(int i = 0; i < n; i++){
        displayData(n, employee[i]);
    }

    float cutoff;

    printf("What is the cutoff salary? ");
    scanf("%f", &cutoff);

    // Displaying data based on cutoff salary
    for(int i = 0; i < n; i++){
        displayDataBasedOnSalary(cutoff, employee[i]);
    }

    char answer;
    int employeeID, index, found = 0;
    float newSalary;

    // Asking whether the user wants to update the salary of a particular employee
    printf("Do you want to update the salary of a particular employee? (Y/N)");
    scanf(" %c", &answer);

    // If the user wants to update the salary, some more questions are asked
    if(answer == 'y' || answer == 'Y'){
        printf("Enter the employee's ID: ");
        scanf("%d", &employeeID);

        for(int i = 0; i < n; i++){
            if(employee[i].id == employeeID){
                found = 1;
                index = i;
            }
        }
        if(found == 1){
            updateSalary(employeeID, newSalary, employee[index]);
        }
        if(found == 0){
            printf("No employee found with the entered ID!"); // Exception handling
        }

        printf("Enter the updated salary: ");
        scanf("%f", &newSalary);
    }
    else{
        printf("Terminated.");
    }
    
    return 0;
}