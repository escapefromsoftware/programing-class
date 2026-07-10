#include<stdio.h>

void rev(int n){
    for(int i = n; i > 0; i /= 10){
        printf("%d", i % 10);
    }
}

int main(){
    int n;
    printf("整数を入力してください。\n");
    if(scanf("%d", &n) != 1){
        printf("不正な入力です。\n");
        return 1;
    }
    rev(n);
    return 0;
}