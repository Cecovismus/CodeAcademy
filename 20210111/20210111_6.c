#include <stdio.h>

int main(){
    int num=15;
    int i=0;
    int mask=1;
    mask=mask<<i;
    num=num^mask;
    printf("%d",num);
    return 0;
}