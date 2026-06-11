#include<stdio.h>

int sum1(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum = sum + i;
    }
return sum;
}

int sum2(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum = sum + i * i;
    }
    return sum;
}

int sum3(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum = sum + i * i * i;
    }
    return sum;
}

int sum4(int n){
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum = sum + i * i * i * i;
    }
    return sum;
}

int func0(int n){
    int sum = 0;
    sum = 5*sum1(n) + 4*sum2(n) + 3*sum3(n) + 2*sum4(n);
    return sum;
}

int main(){
    int x;
    for(int i = 1; i <= 10; i++){
        x = func0(i);
        printf("%d\n", x);
        
    }
    return 0;
}