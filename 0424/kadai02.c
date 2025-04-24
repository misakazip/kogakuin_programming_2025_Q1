#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int rand_num;
    
    srand((unsigned int)time(NULL));
    rand_num = (rand()%10)+1;

    switch(rand_num){
        case 1:
        case 2:
            printf("グー");
            break;
            
        case 3:
        case 4:
        case 5:
            printf("チョキ");
            break;
        
        default:
            printf("パー");
            break;
    }
    return 0;
}