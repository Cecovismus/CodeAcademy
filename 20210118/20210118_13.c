#include <stdio.h>
int main() {
    int nA; 
    int nB;
    int nX;
    int nY;
    printf("Insert nA value\n");
    scanf("%d",&nA);
    printf("Insert nB value\n");
    scanf("%d",&nB);
    printf("Insert nX value\n");
    scanf("%d",&nX);
    printf("Insert nY value\n");
    scanf("%d",&nY);
    if ( nA > nB && nA !=0 ) {
        printf("&& Operator : Both conditions are true\n");
    }
    if ( nX > nY || nY != 20) {
        printf("|| Operator : Only one condition is true\n");
    }
    if ( ! (nA > nB && nB !=0 ) ) {
        printf(" ! Operator : Both conditions are true\n");
    } else {
        printf("Both conditions are true.\n");
    }
} 