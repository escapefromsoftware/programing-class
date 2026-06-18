#include<stdio.h>

int func(int n, int r){
    int sum;
    int num1 = 1, num2 = 1;
    for(int i = r; i >= 1; i--){
        num1 = num1 * n;
        n = n - 1;
        num2 = num2 * i;
    }
    sum = num1 / num2;
return sum;
}

int main(){
    int n, r;
    printf("数字を入力してください:");
    scanf("%d", &n);
    printf("数字を入力してください:");
    scanf("%d", &r);
    int sum;
    sum = func(n, r);
    printf("%d", sum);
    return 0;
}
