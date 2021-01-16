#include <stdio.h>

int main(void){
    int a=3;
    int b=5;
    int rez=a&b;
    printf("3 AND 5 = %d", rez);
    rez=a|b;
    printf("\n3 OR 5 = %d", rez);
    rez=a^b;
    printf("\n3 XOR 5 = %d", rez);

    return 0;
}