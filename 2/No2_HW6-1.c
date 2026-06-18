#include<stdio.h>

char *FNC(int n){
    static char kome[100];

    for(int i = 0; i < n; i++){
        kome[i] = '*';
    }

    kome[n] = '\0';
    return kome;
}

int main(){
    int n;
    printf("出力する三角形の段数を入力してください：");
    scanf("%d", &n);

    for(int i = 1; i < n+1; i++){
        printf("%s\n", FNC(i));
    }

    return 0;
}