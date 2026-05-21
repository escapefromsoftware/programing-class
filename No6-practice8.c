#include <stdio.h>

int a[10] = {0, 2, 6};

int main(){
    for(int n = 2; n < 10; n++){
        a[n] = a[n-1] + a[n-2] * 2 - 3;
        printf("%d\n", a[n]);
    }
}