#include <stdio.h>

int vzemiBitna(int num, int i);

int main(){
    int num=5;
    int i=1;
    printf("%d",vzemiBitna(num,i));
    return 0;
}

int vzemiBitna(int num, int i){
    int mask=1;
    num=num>>i;
    num=num&mask;
    return num;
}