#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (b%a == 0){
        printf("%dは%dの約数です。", a, b);
        return 0;
    }
    else{
        printf("%dは%dの約数ではありません。", a,b);
        return 0;
    }
}