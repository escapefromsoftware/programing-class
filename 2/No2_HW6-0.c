#include<stdio.h>

char *FNC(int n){
    static char kome[100];

    for(int i = 0; i < n; i++){
        kome[i] = '*';//""だとコンパイルエラー
    }

    kome[n] = '\0';//配列の終わりの時に処理を終了
    return kome;
}

int main(){
    int n;
    printf("出力する三角形の段数を入力してください：");
    scanf("%d", &n);

    for(int i = n; i > 0; i--){
        printf("%s\n", FNC(i));
    }

    return 0;
}
