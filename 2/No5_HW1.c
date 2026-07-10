#include<stdio.h>

void horizon(int n){
    for(int i = 0; i < n; i++){
        printf("#");
    }
    printf("\n");
}

void square(int n) {
    for(int i = 0; i < n; i++){
        horizon(n);
    }
}

void enix(int n){
    for(int i = 0; i <= n; i++){
        square(i);
    }
}

int main(){
    int n;
    printf("正方形の一辺の長さを入力してください。\n");
    if(scanf("%d", &n) != 1 || n <= 0){
        printf("不正な入力です。\n");
        return 1;
    }
    enix(n);
    return 0;
}