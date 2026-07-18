#include<stdio.h>

void ast(int n){
    if(n / 2 <= 0) return;
    printf("*");
    ast(n / 2);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    ast(n);
    return 0;
}