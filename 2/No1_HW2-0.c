#include<stdio.h>

int sum1(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum = sum + i;
    }
return sum;
}

int main(){
    int x;
    for(int i = 1; i <= 10; i++){
        x = sum1(i);
        printf("%d\n", x);
        
    }
    return 0;
}