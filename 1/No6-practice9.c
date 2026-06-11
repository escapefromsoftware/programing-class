#include<stdio.h>

int F[10] = {0, 1};
int main(){
    printf("%d\n", F[0]);
    printf("%d\n", F[1]);
    for(int n = 2; n < 10; n++){
        F[n] = F[n-1] + F[n-2];
        printf("%d\n", F[n]);
    }
}