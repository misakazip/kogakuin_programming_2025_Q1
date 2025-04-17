#include <stdio.h>

int main(void){
    int tensu1, tensu2, tensu3, heikin;
    scanf("%d", &tensu1);
    scanf("%d", &tensu2);
    scanf("%d", &tensu3);

    if((tensu1 > 100) || (tensu2 > 100) || (tensu3 > 100) || (tensu1 <0) || (tensu2 < 0) || (tensu3 < 0)){
        printf("0以上100以下の数字を入力してください。");
        return 1;
    }

    heikin = (tensu1+tensu2+tensu3)/3;

    // 確認用
    //printf("3科目の平均得点は%dです。", heikin);

    if (heikin >= 60){
        printf("合格");
        return 0;
    }
    else{
        printf("不合格");
        return 0;
    }
}