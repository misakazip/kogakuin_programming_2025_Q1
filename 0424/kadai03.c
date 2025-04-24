#include <stdio.h>

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
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n");
            break;

        default:
            printf("不正な値です。");
            return 1;
    }
    return 0;
}
