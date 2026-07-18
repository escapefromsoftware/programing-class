#include<stdio.h>

int fibo(int a){
    int fib0 = 1;
    int fib1 = 1;
    for(int i = 0; i < a; i++){
        if(i < 2) printf("%d ", 1);
        else {
            int fib2 = fib0 + fib1;
            printf("%d ", fib2);
            fib0 = fib1;
            fib1 = fib2;
        }
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}