#include<stdio.h>

int add(int a, int b){
    return a + b;
}

void main(){
    int x = add(2, 3);
    printf("%d\n", x);
}