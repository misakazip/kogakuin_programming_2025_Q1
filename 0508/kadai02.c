#include <stdio.h>

int main(void){
    int sum=0, i=1;
    do{
        sum += i;
        i++;
    }while(sum<100);
    printf("%d", i);
}