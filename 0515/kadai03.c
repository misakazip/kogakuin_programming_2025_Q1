#include <stdio.h>

int main(void){
    int n, n1;
    scanf("%d", &n);

    n1 = n;

    int sum = 0;

    for(;;){
        while(n!=0){
        sum += ((n%10)*(n%10));
        n /=10;
        }
        //printf("sum is %d", sum);

        if(sum == n1){
            printf("Unhappy");
            break;
        }else if(sum == 1){
            printf("Happy");
            break;
        }
        n = sum;
        sum =0;
    }
}