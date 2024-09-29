#include <stdio.h>
#include <math.h>

int main()
{   double a, b, c, root_1, root_2;
    printf("Enter the values of a, b, c in a quadratic equation (D>=0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    root_1 = (-b + sqrt(pow(b,2)-(4*a*c)))/(2*a);
    root_2 = (-b - sqrt(pow(b,2)-(4*a*c)))/(2*a);

    printf("The roots of the equation are: %lf, %lf.", root_1, root_2);
}