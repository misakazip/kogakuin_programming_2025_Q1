#include <stdio.h>

int main(void){
    int n, sum=2, count;
    scanf("%d", &n);

    n -= 1;

    do{
        if(n == 0){
            printf("%d", sum);
            return 0;
        }
        sum*=3;
        count++;
    }while(count<n);

    printf("%d\n", sum);

}
