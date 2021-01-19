#include <stdio.h>
int main(){
    int A;
    printf("A= ");
    scanf("%d",&A);
    A^=A<<13;
    printf("A= %d\n",A);
    A^=A>>17;
    printf("A= %d\n",A);
    A^=A<<5;
    printf("A= %d\n",A);
    return 0;
}