#include <stdio.h>

int main(void){
    int a, b, c, count=0, skip=0;
    for(c=1; c<100; c++){
        skip=0;
        for(a=1; a<100; a++){
            for(b=1; b<100; b++){
                if ((a*a + b*b) == c*c){
                    printf("%d, %d, %d\n", a, b, c);
                    count++;
                    skip=1;
                }
                if(skip ==1){
                    break;
                }
                
            }
            if(skip == 1){
                break;
            }
        }
    }
    printf("%d", count);
}