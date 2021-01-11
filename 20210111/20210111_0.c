#include <stdio.h>

int addDigit(int, int);

int main(void){
    int a=5;
    int b=3;
    printf ("%d",addDigit(a,b));
    return 0;
}

int addDigit(int a, int b){
    int c=a+b;
    return c;
}