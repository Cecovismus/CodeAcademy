#include <stdio.h>
float area(float);
float areaE(float,float);
float Pi=3.14159;
int main(){
    printf("pri R=1, Ao=%f\npri R=1.5, Ao=%f\npri R=13, Ao=%f\n",area(1),area(1.5),area(13));
    printf("\npri a=1 i b=2, Ae=%f\npri a=1.5 i b=0.5, Ae=%f\npri a=13 i b=15, Ae=%f\n",areaE(1,2),areaE(1.5,0.5),areaE(13,15));
    return 0;
}
float area(float R){
    return Pi*R*R;
}
float areaE(float A, float B){
    return Pi*A*B;
}