#include<stdio.h>

//a0 = 0
//an=(an-1*an-1)+1 (n>0)
int a(int n){
    if(n <= 0){
        return 0;
    }
    else{
        int r = a(n - 1) * a(n - 1) + 1;
        return r;
    }
}

int main(){
    int n, ans;
    printf("1～6を指定してください：");
    scanf("%d", &n);
    ans = a(n);
    printf("%d", ans);
}