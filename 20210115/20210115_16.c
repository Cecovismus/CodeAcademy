#include <stdio.h>
float area(float);
int main(){
    printf("pri R=1, A=%f\npri R=1.5, A=%f\npri R=13, A=%f\n",area(1),area(1.5),area(13));
    return 0;
}
float area(float R){
    float Pi=3.14159;
    return Pi*R*R;
}