#include <stdio.h>

int main(){

    auto int i = 1;
    {
        auto int i = 2;
        {
            auto int i = 3;
            printf("\n%d", i);
        }
        printf("\n%d", i);
    }
    printf("\n%d", i);
    return 0;
}