#include <stdio.h>

int main(void){
    int input,hh,mm,ss,nokori;

    scanf("%d", &input);

    hh=input/3600;
    nokori=input-3600*hh;
    mm=nokori/60;
    ss=nokori-60*mm;
    
    printf("%d:%d:%d\n", hh,mm,ss);
    printf("%d時間%d分%d秒\n", hh,mm,ss);

    return 0;
}