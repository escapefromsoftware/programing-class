#include <stdio.h>

int n, r;

int factorial(int x){
    if (x <= 1) return 1;
    return (int)x * factorial(x - 1);
}

int main(){
    int fn, fr, fnr, denom, ans;

    printf("n を入力してください：");
    if (scanf("%d", &n) != 1) return 1;
    printf("r を入力してください：");
    if (scanf("%d", &r) != 1) return 1;

    if (r < 0 || n < 0 || r > n){
        printf("0\n");
        return 0;
    }

    fn = factorial(n);
    fr = factorial(r);
    fnr = factorial(n - r);

    denom = fr * fnr;
    ans = fn / denom;

    printf("%d\n", ans);
    return 0;
}