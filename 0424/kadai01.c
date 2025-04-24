#include <stdio.h>

int main(void){
    int num;
    
    scanf("%d", &num);
    
    switch(num){
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
            printf("%d\n", num);
    }
}
