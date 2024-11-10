#include <stdio.h>

int hcf(int a, int b){
    int min, hcf = 1;

    min = a<b?a:b;

    if(a == b){
        hcf = a;
        return hcf;
    }

    for(int i = 2; i <= min; i++){
        if(a % i == 0 && b % i == 0){
            hcf = i;
        }
        else{
            continue;
        }
    }
    return hcf;
}

int main(){
    int a, b;

    printf("Enter the two numbers with a space between them: ");
    scanf("%d %d", &a, &b);

    printf("The HCF of the entered numbers is %d.", hcf(a, b));

    return 0;
}