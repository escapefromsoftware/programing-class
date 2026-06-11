#include<stdio.h>

int fuga(int a, int b){
    return a + b;
}

int main(){
    int a = fuga(1, 3);
    printf("%d\n", a);
    int b = fuga(5, 6);
    printf("%d\n", b);
    return 0;
}