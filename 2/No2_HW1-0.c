#include<stdio.h>

int shirokuma(int n){
    int num;
    if(n <= 1){
        return 1;
    }
    else{
        num = n * shirokuma(n-1);
        return num;
    }
}

int main(){
    int ans;
    for(int i = 0; i <= 10; i++){
        ans = shirokuma(i);
        printf("%d! = %d\n", i, ans);
    }
    return 0;
}