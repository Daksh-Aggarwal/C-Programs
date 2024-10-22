#include <stdio.h>

int main(){
    int i, n1, n2, min, hcf = 1;

    printf("Enter two numbers with a space between them: ");
    scanf("%d %d", &n1, &n2);

    min = n1<n2?n1:n2;

    if(n1 == 0 && n2 == 0){
        printf("HCF is undefined!");
    }
    else{
    for(i = 1; i <= min; i++){
        if (n1 % i == 0 && n2 % i == 0){
            hcf = i;
        }
    }
    printf("The HCF is %d.", hcf);
    }
    
    return 0;
}