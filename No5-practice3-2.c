#include <stdio.h>

int main(){
    int i, j;
    for(i = 1; i <= 10;i++){
        for(j = 10; j >= i; j--){
            printf(" ");
        }
        for(int a = 1; a <= i; a++){
            printf("*");
        }
        printf("\n");
    }
}