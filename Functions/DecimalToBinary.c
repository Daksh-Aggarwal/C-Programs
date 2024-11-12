// WIP

#include <stdio.h>

int DecimalToBinary(int n){
    int arr[32], i = 0;

    while(n > 0){
        arr[i] = n % 2;
        n /= 2;
        i++;
    }

    for(int j = i - 1; j >= 0; j--){
    printf("%d", arr[i]);
    }

}

int main(){
    int n;

    printf("Enter the decimal number: ");
    scanf("%d", &n);

    DecimalToBinary(n);

    return 0;
}