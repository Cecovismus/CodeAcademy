#include <stdio.h>
int main(){
    int karavani=3;
    int camperi=3;
    float cenaK=90;
    float cenaC=100;
    printf("Dobre doshli v Karavani Kemperi pod naem\n");
    printf("Razpolagame s %d svobodni karavani na cena %.2f lv na den\n",karavani,cenaK);
    printf("i %d svobodni kempera na cena %.2f lv na den\n",camperi,cenaC);
    printf("Kolko karavani zelate da naemete\n");
    int rentedKar;
    scanf("%d", &rentedKar);
    printf("Kolko kempera jelaete da naemete\n");
    int rentedCam;
    scanf("%d", &rentedCam);
    float smetka=rentedKar*cenaK+rentedCam*cenaC;
    karavani-=rentedKar;
    camperi-=rentedCam;
    printf("Do tuk dyljite %.2f lv\n",smetka);
    printf("Ostavashti nalichni karavani - %d , ostavashti nalichni kempera - %d.\nJelaete li da naemete oshte neshto?\n",karavani, camperi);
    return 0;
}
