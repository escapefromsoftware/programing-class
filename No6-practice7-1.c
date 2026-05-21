#include <stdio.h>

int a[10];

int main(){
    a[1] = 3;
    for(int n = 1; n <= 10; n++){
        a[n+1] = a[n]*2;
        printf("%d\n", a[n]);
    }
}