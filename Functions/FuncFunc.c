//Function calling a function

#include <stdio.h>

int message();

int main()
{
    message();

}

int message(){
    printf("\nCan't imagine life without C");
    main();
}