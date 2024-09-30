#include <stdio.h>	
#include <math.h>

int main()
{	
	double n;
	printf("Enter a number: ");
	scanf("%lf", &n);
	
	printf("Sine value of %lf is: %lf.\n", n, sin(n));
	printf("Cosine value of %lf is: %lf.\n", n, cos(n));
	printf("Log value of %lf is: %lf.\n", n, log(n));
	printf("Square root of %lf is: %lf.\n", n, sqrt(n));
	printf("3rd power of %lf is: %lf", n, pow(n, 3));	
	
	return 0;
}