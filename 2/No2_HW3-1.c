#include<stdio.h>

//a0 = 0
//an=(a(n-1)*a(n-1))+1 (n>0)
int a(int n){
    int ans = 0;

    if(n <= 0){
        return 0;
    }

    for(int i = 1; i <= n; i++){
        ans = ans * ans + 1;
    }

    return ans;
}

int main(){
    int n, ans;
    printf("1～6を指定してください：");
    scanf("%d", &n);
    ans = a(n);
    printf("%d", ans);
    return 0;
}
