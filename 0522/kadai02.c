#include <stdio.h>
/* 配列の宣言方法
   int a[5];  ←要素数
   int a[5] = {0}; すべての要素を0で初期化 (0のみ可能)
   int a[5] ={8,8,8,8,8}; 全ての要素を8で初期化
*/
int main(void){
    int eng[10] = {32, 34, 41, 38, 40, 26, 14, 46, 42, 50};
    int mat[10] = {21, 33, 45, 47, 39, 41, 23, 45, 47, 29};
    int result[10];
    int sum;
    for(int i=0; i<10; i++){
        sum = eng[i] + mat[i];
        if(sum >= 90) result[i] = 5;
        else if(sum >= 80) result[i] = 4;
        else if(sum >= 70) result[i] = 3;
        else if(sum >= 60) result[i] = 2;
        else result[i] = 1;
    }

    for(int j=0; j<10; j++) printf("%d ", result[j]);
}
