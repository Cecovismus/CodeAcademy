#include <stdio.h>
int main(){
    int a;
    printf("Press 1 to see message Hello\n"
    "Press 2 to see message Poem\n"
    "Press 3 to see hidden message\n");
    scanf("%d",&a);
    if (a==1){
        printf("Hello");
    } else if (a==2){
        printf("Poem");
    } else if( a==3){
        printf("****");
    } 
    return 0;
}