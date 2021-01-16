#include <stdio.h>
int main(){
    float domatiCena =4.5;
    float domatiTeglo;
    float brashnoCena =1.8;
    float brashnoTeglo;
    float kMlqkoCena =0.5;
    float kMlqkoBroi; // opitah da go deklariram kato int, no sled towa ne go umojava pravilno
    float sladoledCena =0.6;
    float sladoledBroi;
    float bonbonCena =1.5;
    float bonbonTeglo;
    float blizalkiCena =0.15;
    float blizalkiBroi;

    printf("Zdraveite! Dobre doshli v nashiq magazin...\n");
    printf("Kolko kg domati jelaete?\n");
    scanf("%f",&domatiTeglo);
    float domati=domatiTeglo*domatiCena;
    printf("Kolko kg brashno jelaete?\n");
    scanf("%f",&brashnoTeglo);
    float brashno=brashnoTeglo*brashnoCena;
    printf("Kolko kiseli mleka jelaete?\n");
    scanf("%f",&kMlqkoBroi);
    float kMlqko=kMlqkoBroi*kMlqkoCena;
    printf("Kolko funijki sladoled jelaete?\n");
    scanf("%f",&sladoledBroi);
    float sladoled=sladoledBroi*sladoledCena;
    printf("Kolko kg bonboni jelaete?\n");
    scanf("%f",&bonbonTeglo);
    float bonbon=bonbonTeglo*bonbonCena;
    printf("Kolko blizalki jelaete?\n");
    scanf("%f",&blizalkiBroi);
    float blizalki=blizalkiBroi*blizalkiCena;
    float smetka=domati+brashno+kMlqko+sladoled+bonbon+blizalki;
    printf("Vashata smetka e %.2f lv.",smetka);
    return 0;
}