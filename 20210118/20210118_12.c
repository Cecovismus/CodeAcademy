#include <stdio.h>
int main() {
    int nX; 
    int nY;
    printf("Insert nX value\n");
    scanf("%d",&nX);
    printf("Insert nY value\n");
    scanf("%d",&nY);
    if (nX == nY) {
        printf("%d and %d are equal\n", nX, nY);
    } else {
        printf("%d and %d are not equal\n", nX, nY);
    }
    if (nX > nY) { printf("%d is greater than %d\n", nX, nY);
    }
    if (nX < nY) { printf("%d is greater than %d\n", nY, nX);
    }
}