#include <stdio.h>
int main(){
    int iX=13;
    int iY=44;
    int iResult=0;
    iResult=iX-iY;
    printf("%d-%d=%d\n",iX,iY,iResult);
    iResult=iX/iY;
    printf("%d/%d=%d\n",iX,iY,iResult);
    iResult=iX%iY;
    printf("%d/%d Remainder:%d\n",iX,iY,iResult);
    float fResult=iX*iY;
    printf("%d*%d=%f\n",iX,iY,fResult);
    fResult=iX+iY;
    printf("%d+%d=%f\n",iX,iY,fResult);
}