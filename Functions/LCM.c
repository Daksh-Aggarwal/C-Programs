#include <stdio.h>

int lcm(int a, int b){
    int min, hcf = 1, lcm;

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

    lcm = (a * b)/hcf;

    return lcm;
}

int main(){

    int a, b;

    printf("Enter the two numbers with a space between them: ");
    scanf("%d %d", &a, &b);

    printf("The LCM of the two entered numbers is %d.", lcm(a, b));

    return 0;
}