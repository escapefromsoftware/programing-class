#include<stdio.h>

int function(int a, int b, int c){
    return a+b+c;
}

int main(){
    int x = function(1, 2, 3);
    printf("%d\n", x);
    return 0;
}