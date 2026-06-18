#include<stdio.h>

int inazuma(int n){
    printf("inazuma関数が開始されました。引数は%dです。\n",n);
    int num;
    if(n <= 1){
        return 1;
    }
    else{
        num = n * inazuma(n-1);
        return num;
    }
}

int main(){
    printf("メイン関数が開始されました。\n");
    int ans;
    for(int i = 0; i <= 10; i++){
        ans = inazuma(i);
        printf("%d! = %d\n", i, ans);
    }
}