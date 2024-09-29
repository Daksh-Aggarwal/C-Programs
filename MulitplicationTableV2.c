#include <stdio.h>

int main(){
    int i, j, n;
    printf("Upto which number's table do you require? ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("TABLE OF %d:\n", i);
        for(j=0; j<=10; j++){
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}