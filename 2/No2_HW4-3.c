#include<stdio.h>


//a(n) = a(n-1) + a(n-2)
int fibo(int n){
    int before2 = 1;
    int before1 = 1;
    int ans;

    if(n == 0 || n == 1){
        return 1;
    }

    for(int i = 2; i <= n; i++){
        ans = before1 + before2;
        before2 = before1;
        before1 = ans;
    }

    return ans;
}

int main(){
    for(int i = 0; i <= 9; i ++){
        printf("fibo(%d) = %d\n", i, fibo(i));
    }
    return 0;
}