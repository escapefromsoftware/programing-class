#include <stdio.h>

int main(){
    int i, j, a;
    for(i = 1; i <= 20;i = i + 2){
        for(j = 20; j >= i; j = j - 2){
            printf(" ");
        }
        for(a = 1; a <= i; a++){
            printf("*");
        }
        for(int b = 10; b >= i; b--){
            printf(" ");
        }
        a++;

        printf("\n");
    }
}