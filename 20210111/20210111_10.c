#include <stdio.h>

int main(){
    int num=824; //11 0011 1000
    int i=3;
    int mask=65535;
    mask=mask<<i+1;
    num=num&(~mask);
    printf("%d",num);
    return 0;
}