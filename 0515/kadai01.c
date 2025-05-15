#include <stdio.h>

int  main(void){
    int sum;

    for(int i=1; i<=10000; i++){
        // iの約数を特定、sumに足す
        sum = 0;
        for(int j=1; j<i; j++){
            if(i%j == 0) sum += j;
        }
        if(sum == i) printf("%d\n", i);
    }
}