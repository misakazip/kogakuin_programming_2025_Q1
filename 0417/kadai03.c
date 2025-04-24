#include <stdio.h>

int main(void){
    int a;
    scanf("%d",&a);
    if (a%400 == 0){
        printf("閏年です");
        return 0;
    }
    else if(a%100 == 0){
        printf("閏年ではありません");
        return 0;
    }
    else if(a%4 == 0){
        printf("閏年です");
        return 0;
    }
    else{
        printf("閏年ではありません");
        return 0;
    }

}
