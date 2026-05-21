#include<stdio.h>

int F[10] = {0, 1};
int main(){
    for(int n = 2; n < 10; n++){
        F[n] = F[n-1] + F[n-2];
        printf("%d\n", F[n]);
    }
}