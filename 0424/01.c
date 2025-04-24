#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int rand_num;
    
    srand((unsigned int)time(NULL));
    rand_num = (rand()%10)+1;
    printf("##おみくじ##\n");
    // 確認用
    //printf("%d\n", rand_num);

    switch(rand_num){
        case 1:
            printf("大吉");
            break;

        case 2:
            printf("中吉");
            break;
        
        case 3:
            printf("小吉");
            break;
        
        default:
            printf("吉");
            break;
    }
    return 0;
}