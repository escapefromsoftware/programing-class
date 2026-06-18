#include<stdio.h>

int fibo(int n){
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
    for (int n = 0; n <= 9; n++){
        printf("fibo(%d) = %d\n", n, fibo(n));
    }
    return 0;
}