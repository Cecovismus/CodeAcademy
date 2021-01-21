#include <stdio.h>
int main(){
    int a=0;
    for(;;){
        printf("%d ",a++);
        if(a==48)
            break;
    }
    return 0;
}