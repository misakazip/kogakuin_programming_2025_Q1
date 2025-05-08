#include <stdio.h>

int main(void){
    int n, a1=1, a2=1, a=0, count=3;
    scanf("%d", &n);

    do{
        a = a1 + a2;
        a2 = a1;
        a1 = a;
        count += 1;
    }while(count <= n);
    printf("%d", a);

}