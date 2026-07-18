#include<stdio.h>
void ast(int n){
    while(n / 2 > 0){
        printf("*");
        n /= 2;
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    ast(n);
    return 0;
}