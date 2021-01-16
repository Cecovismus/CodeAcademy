#include <stdio.h>
#define printf __mingw_printf
int main(){
    double d=4.9876543;
    printf("\n%.7f\n",d);
    long double ld=7.12345678901234567889;
    printf("\n%.21Lf\n",ld);
    long double ld2=18398458438583853.28;
    printf("\n%16.2Lf\n",ld2);
    long double ld3=18398458438583853.39875937284928422;
    printf("\n%16.17Lf\n",ld3);
    return 0;
}