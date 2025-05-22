#include <stdio.h>
/* 配列の宣言方法
   int a[5];  ←要素数
   int a[5] = {0}; すべての要素を0で初期化 (0のみ可能)
   int a[5] ={8,8,8,8,8}; 全ての要素を8で初期化
*/
int main(void){
    int a[10] = {3, 7, 6, 1, 9, 5, 10, 2, 4, 8};
    int b[10] = {12, 18, 13, 16, 17, 20, 15, 14, 19};
    int tmp[10];

    for(int i=0; i<10; i++) tmp[i] = a[i];
    for(int j=0; j<10; j++) a[j] = b[j];
    for(int k=0; k<10; k++) b[k] = tmp[k];
}

