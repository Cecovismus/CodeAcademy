#include <stdio.h>

int iz4istiBitna(int num, int i);

int main(){
    int num=7;
    int i=1;
    printf("%d",iz4istiBitna(num,i));
    return 0;
}

int iz4istiBitna(int num, int i){
    int mask=1;
    mask=mask<<i;
    num=num&(~mask);
    return num;
}