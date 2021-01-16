#include <stdio.h>

int vdigniBitna(int num, int i);

int main(){
    int num=8;
    int i=0;
    printf("%d",vdigniBitna(num,i));
    return 0;
}

int vdigniBitna(int num, int i){
    int mask=1;
    mask=mask<<i;
    num=num|mask;
    return num;
}