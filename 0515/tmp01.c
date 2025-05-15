#include <stdio.h>

int main(void){
    int n, sum=0;
    scanf("%d", &n);
        for(int i=1; i<n; i++){
            if(n%i == 0){
                printf("%d\n", i);
                sum += i;
        }
        }
        printf("%d", sum);
}