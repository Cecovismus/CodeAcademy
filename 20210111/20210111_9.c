#include <stdio.h>

int main(){
    int num=3327;           // chislo   3327 - 1100 1111 1111
    int mask=112;           // rezultat 3125 - 1100 1000 1111          
    num=num&(~mask);        // priemam che poziciite mejdu 3 i 7 sa 4,5,6 (bez 3 i 7)
    printf("%d",num);
    return 0;
}