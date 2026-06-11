#include<stdio.h>

int inc(int n){
    return n+1;
}

int main(){
    int x;
    x = inc(14);
    printf("%d\n", x);
    return 0;
}