#include <stdio.h>
#include <time.h>

int main(void){
    int year, month;
    scanf("%d", &year);
    scanf("%d", &month);

    switch(month){
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30\n");
            break;
        case 2:
            switch(year%100){
                case 0:
                    switch(year%400){
                        case 0:
                            printf("29\n");
                            break;
                        default:
                            printf("28\n");
                            break;
                    }
                    break;
                
                default:
                    switch(year%4){
                        case 0:
                            printf("29\n");
                            break;
                        default:
                            printf("28\n");
                            break;
                    }
                    break;
            }
        default:
        printf("31\n");
        break;
    }
    return 0;
}
