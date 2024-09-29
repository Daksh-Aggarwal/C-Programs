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