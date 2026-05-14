#include <stdio.h>

int main(){
    int i, j, a;
    for(i = 1; i <= 21;i = i + 2){
        for(j = 1; j <= i; j = j + 2){
            printf(" ");
        }
        for(a = 21; a >= i; a--){
            printf("*");
        }
        for(int b = 1; b <= i; b++){
            printf(" ");
        }
        a--;

        printf("\n");
    }
}