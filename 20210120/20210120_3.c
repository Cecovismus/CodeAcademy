#include <stdio.h>
int main(){
    int a;
    while(a!=4){
        printf("Press 1 to see message Hello\n"
        "Press 2 to see message Poem\n"
        "Press 3 to see hidden message\n"
        "Press 4 to escape\n");
        scanf("%d",&a);
        switch (a){
            case 1:
                printf("Hello\n");
                break;
            case 2:
                printf("Poem\n");
                break;
            case 3:
                printf("42\n");
                break;
        }
    }
    return 0;
}