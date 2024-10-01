#include <stdio.h>

void tower(int n, char A, char B, char C){
    if (n == 0){
        return;
    }
    tower(n - 1, A, B, C);
    printf("\n Move disc %d from rod %c to rod %c.", n, A, C);
    tower(n - 1, B, C, A);
}

int main()
{
    int n;
    printf("Enter the number of discs: ");
    scanf("%d", &n);

    tower(n, 'A', 'B', 'C');
    return 0;
}