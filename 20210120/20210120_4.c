#include <stdio.h>
int main(){
    int a=0,b=1,c=0;
    while (a<50 || b<30){
        c=a+b;
        printf("%d+%d=%d\n",a,b,c);
        a+=b;
        b=c-b;
    }
    return 0;
}