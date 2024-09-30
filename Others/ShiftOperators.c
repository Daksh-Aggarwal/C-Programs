// Left shift is used to multiply the number by powers of 2 and right shift is used to divide the number by powers of 2

#include<stdio.h>

int main()
{
	int num = 5;

	printf("Entered number is: %d",num);
	printf("\n");

	int left_shift = num << 2;
	int right_shift = num >> 2;

	printf("Left shifted value is %d.\n",left_shift);
    printf("Right shifted value is %d.",right_shift);

    return 0;
}

/*#include <stdio.h>

int main() {
    int a = 5;  // Binary: 0000 0101

    // Left Shift Operation
    int leftShift = a << 1;  // Shift left by 1, result: 0000 1010 (10 in decimal)

    // Right Shift Operation
    int rightShift = a >> 1;  // Shift right by 1, result: 0000 0010 (2 in decimal)

    printf("Original value of a = %d\n", a);
    printf("After left shift by 1, a << 1 = %d\n", leftShift);
    printf("After right shift by 1, a >> 1 = %d\n", rightShift);

    return 0;
}
*/