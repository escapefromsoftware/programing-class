#include <stdio.h>

int a[10];

int main(){
    a[0] = 3;
    for(int n = 0; n <= 9; n++){
        switch (n) {
        case 0:
            a[n] = 3;
            break;
        case 1:
            a[n] = a[n-1]*2;
            break;
        case 2:
            a[n] = a[n-1]*2;
            break;
        case 3:
            a[n] = a[n-1]*2;
            break;
        case 4:
            a[n] = a[n-1]*2;
            break;
        case 5:
            a[n] = a[n-1]*2;
            break;
        case 6:
            a[n] = a[n-1]*2;
            break;
        case 7:
            a[n] = a[n-1]*2;
            break;
        case 8:
            a[n] = a[n-1]*2;
            break;
        case 9:
            a[n] = a[n-1]*2;
            break;
        case 10:
            a[n] = a[n-1]*2;
            break;
        }
        printf("%d\n", a[n]);
    }
}