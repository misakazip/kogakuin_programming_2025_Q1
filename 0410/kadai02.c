#include <stdio.h>

int main(void){
    int a,b,syuu,menseki;

    scanf("%d", &a);
    scanf("%d", &b);

    syuu = 2*a + 2*b;
    menseki = a*b;

    printf("長方形の周の長さ：%d\n", syuu);
    printf("長方形の面積：%d\n", menseki);

}