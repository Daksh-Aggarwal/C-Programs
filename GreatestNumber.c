#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter the three numbers with a space between each (eg. 2 3 4): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c){
        printf("%d is the greatest number.", a);
    }
    if (b>a && b>c){
        printf("%d is the greatest number.", b);
    }
    if (c>a && c>b){
        printf("%d is the greatest number.", c);
    }
    else{
        printf("Error!");
    }
    
    return 0;
}