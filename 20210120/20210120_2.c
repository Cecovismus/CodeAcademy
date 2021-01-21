#include <stdio.h>
int main(){
    int a;
    printf("Press 1 to see message Hello\n"
    "Press 2 to see message Poem\n"
    "Press 3 to see hidden message\n");
    scanf("%d",&a);
    switch (a){
        case 1:
            printf("Hello");
            break;
        case 2:
            printf("Poem");
            break;
        case 3:
            printf("42");
            break;
    }
    return 0;
}