#include<stdio.h>

int F[10] = {0, 1};
int main(){
    for(int n = 0; n < 10; n++){
        F[n+2] = F[n+1] + F[n];
        printf("%d\n", F[n]);
    }
}