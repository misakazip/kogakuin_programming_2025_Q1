#include <stdio.h>
/* 配列の宣言方法
   int a[5];  ←要素数
   int a[5] = {0}; すべての要素を0で初期化 (0のみ可能)
   int a[5] ={8,8,8,8,8}; 全ての要素を8で初期化
*/
int main(void){
    int a[10] = {2, 4, 1, 8, 10, 7, 4, 6, 3, 5};
    int remove;
    int aa=0;
    scanf("%d", &remove);
    for(int i=0; i<10; i++){
        if(remove == a[i]){
            aa = 1;
            if(i==9) a[i] = 0;
            else{
                a[i] = a[i+1];
            }
            a[i] = a[i+1];
        }else if(aa == 1){
            if(i==9) a[i] = 0;
            else{
                a[i] = a[i+1];
            }
        }
    }
    for(int j=0; j<10; j++){
        printf("%d ", a[j]);
    }
}
