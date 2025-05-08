#include <stdio.h>

int main(void){
    int sum=1, i=1, n;
    scanf("%d", &n);
    while(i<=n){
        sum *=i;
        i++;
    }
}