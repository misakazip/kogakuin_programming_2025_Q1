#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int rand_num;
    
    srand((unsigned int)time(NULL));
    rand_num = (rand()%13)+1;
    
    switch(rand_num){
        case 1:
            printf("A\n");
            break;
        
        case 11:
            printf("J\n");
            break;
        
        case 12:
            printf("Q\n");
            break;

        case 13:
            printf("K\n");
            break;
        
        default:
            printf("%d\n", rand_num);
    }
}