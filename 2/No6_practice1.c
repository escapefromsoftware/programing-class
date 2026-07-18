#include<stdio.h>

int fibo(int a){
    if(a < 2) return 1;
    return fibo(a-1) + fibo(a-2);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("%d ", fibo(i));
    }
    return 0;
}