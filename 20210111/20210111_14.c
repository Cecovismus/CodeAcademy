#include <stdio.h>

int main(){
    int num=150; //1001 0110
    int mask=170;
    num=num^mask;
    printf("%d",num);
    return 0;
}