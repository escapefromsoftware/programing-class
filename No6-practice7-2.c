#include <stdio.h>

double a[10];

int main(){
    a[1] = 3;
    for(int n = 0; n <= 9; n++){
        switch (n) {
        case 0:
            a[n] = a[n+1] / 2.0;
            break;
        case 1:
            a[n] = 3;
            break;
        default:
            a[n] = a[n-1] * 2;
        }
        printf("%lf\n", a[n]);
    }
}