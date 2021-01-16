#include <stdio.h>

int main (void){
    double d =0xBB;
    long long int lli=0xBBLL;
    unsigned long long ull=0xBBuL;
    printf("f = %lf, i = %lld, a = %lld",d, lli, ull);
    return 0; 
}