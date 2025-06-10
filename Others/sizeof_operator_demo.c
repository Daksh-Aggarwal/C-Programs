// Description: Displays the size (in bytes) of various data types using sizeof operator.
// Concepts used: sizeof operator, data types, standard library functions

// Doesn't run in VS Code

#include <stdio.h>

int main()
{
    printf("The size of 'int' is %d bytes.\n", sizeof(int));
	printf("The size of 'long int' is %d bytes.\n", sizeof(long int));
	printf("The size of 'char' is %d bytes.\n", sizeof(char));
	printf("The size of 'float' is %d bytes.\n", sizeof(float));
	printf("The size of 'double' is %d bytes.\n", sizeof(double));
	
    return 0;
}