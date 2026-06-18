#include<stdio.h>
#include <time.h>
#include <stdlib.h>


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
    clock_t ti[9];
    for(int i = 0; i <= 9; i ++){
        printf("fibo(%d) = %d\n", i, fibo(i));
        ti[i] = clock();
	    printf("%d回目時刻 %d\n", i, ti[0]);
        printf("1回目と%d回目の時間差 %d\n", i+1 ,ti[i]-ti[0]);
    }
    printf("size = %d\n", sizeof(clock_t));
    return 0;
}