#include <stdio.h>

int obarniBitna(int num, int i);

int main(){
    int num=15;
    int i=3;
    printf("%d",obarniBitna(num,i));
    return 0;
}

int obarniBitna(int num, int i){
    int mask=1;
    mask=mask<<i;
    num=num^mask;
    return num;
}