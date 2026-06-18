#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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
    clock_t ti[9];
    for (int n = 0; n <= 9; n++){
        printf("fibo(%d) = %d\n", n, fibo(n));
        ti[n] = clock();
	    printf("%d回目時刻 %d\n", n, ti[0]);
        printf("1回目と%d回目の時間差 %d\n", n+1 ,ti[n]-ti[0]);
    }
    printf("size = %d\n", sizeof(clock_t));
    return 0;
}
