#include <stdio.h>

int main (){
    char x=8;
    x=x-2;
    printf("%u\n",x);
    x=x+6;
    printf("\n%u\n",x);
    x=x-10+2;
    printf("\n%u",x);

    return 0;
}