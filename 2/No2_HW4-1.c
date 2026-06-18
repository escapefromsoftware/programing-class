#include<stdio.h>

int fibo(int n){
    printf("fibo関数(%d)が開始されました\n", n);
    printf("引数は%dです。\n", n);
    if(n == 0){
        return 1;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibo(n-1) + fibo(n -2);
    }
}

int main(){
    printf("メイン関数が開始されました。\n");
    for (int n = 0; n <= 9; n++){
        printf("fibo(%d) = %d\n", n, fibo(n));
    }
    return 0;
}