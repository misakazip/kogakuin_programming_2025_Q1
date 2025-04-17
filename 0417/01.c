#include <stdio.h>

int main(void){
    int tensu1, tensu2, tensu3, heikin;
    scanf("%d", &tensu1);
    scanf("%d", &tensu2);
    scanf("%d", &tensu3);

    heikin = (tensu1+tensu2+tensu3)/3;

    // 確認用
    printf("3科目の平均得点は%dです。", heikin);

    if (heikin >= 60){
        printf("合格");
        return 0;
    }
    else{
        printf("不合格");
        return 0;
    }
}