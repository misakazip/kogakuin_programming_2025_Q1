#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);

    if(n<10) n*= (-1);
    do{
        if((n%10)%2 == 0){
            printf("これは偶数が含まれます。");
            return 0;
        }
        n/=10;
    }while(n>0);
    printf("これは全て奇数です。");
}