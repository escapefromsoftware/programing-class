#include<stdio.h>

int takaramajima(int n){
    int ans = 1;
    for(int i = n; i > 0; i--){
        ans = ans * i;
    }
    return ans;
}

int main(){
    for(int i = 0; i <= 10; i++){
        printf("%d! = %d\n", i, takaramajima(i));
    }
    return 0;
}