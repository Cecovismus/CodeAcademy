#include <stdio.h>
int main(){
    char cValue='b';
    printf("\n%d\n",sizeof(cValue));
    int iValue=100;
    printf("\n%d\n",sizeof(iValue));
    long long int lValue=11111111;
    printf("\n%d\n",sizeof(lValue));
    float fValue=1.23;
    printf("\n%d\n",sizeof(fValue));
    short int siValue=42;
    printf("\n%d\n",sizeof(siValue));
    unsigned long int ulValue=14000000;
    printf("\n%d\n",sizeof(ulValue));
    return 0;
} // размерите на моята машина са същите като в таблицата от презентацията