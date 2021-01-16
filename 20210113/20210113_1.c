#include <stdio.h>

int main (){
    char x=255;
    char y=10;
    printf("%d",x+y);
    return 0;
} // сбора на 255 с 10 прехвърля обхвата на char. Резултатът е 9, защото броенето започва от 0 след 255. 