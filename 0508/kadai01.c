#include <stdio.h>

int main(void){
    int a, count=1;
    scanf("%d", &a);

    if(a<0){
        a *= (-1);
    }
    do{
        a /= 10;
        count++;
    }while(a>=10);

    printf("%d", count);
}
