#include <stdio.h>
int main(){
    int karavani=3;
    int camperi=3;
    float cenaK=90;
    float cenaC=100;
    printf("Dobre doshli v Karavani Kemperi pod naem\n");
    printf("Razpolagame s %d svobodni karavani na cena %.2f lv na den\n",karavani,cenaK);
    printf("i %d svobodni kempera na cena %.2f lv na den\n",camperi,cenaC);
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    int rez;
    scanf("%d", &rez);

    return 0;
}