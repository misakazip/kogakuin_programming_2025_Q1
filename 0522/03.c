#include <stdio.h>
/* 配列の宣言方法
   int a[5];  ←要素数
   int a[5] = {0}; すべての要素を0で初期化 (0のみ可能)
   int a[5] ={8,8,8,8,8}; 全ての要素を8で初期化
*/
int main(void){
    int a[10];
    int b[10];
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    for(int j=0; j<10; j++){
        if((a[j] % 2) != 0) b[j] = a[j];
        else b[j] = (a[j]*2 + 1); 
    }
}
