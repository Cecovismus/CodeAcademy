#include <stdio.h>
void test();
int a=1;
int main(){
    static int a=0;
    test(a);
    test(a);
    test(a);
    printf("%d",a);
    return 0;
}
void test(){
    a+=1;
}