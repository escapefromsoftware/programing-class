#include <stdio.h>

int num1,num2,x=1,ans;

int main(){
    printf("正の整数を入力してください。:");
    scanf("%d",&num1);
    if (num1 < 0){
        printf("%dは正の数ではありません。");
        return 0;
    }

    printf("正の整数を入力してください。:");
    scanf("%d", &num2);
    if (num2 < 0){
        printf("%dは正の数ではありません。");
        return 0;
    }

    if(num1<num2){
        while(num2 % (num1/x) != 0){
            x++ ;
        }
        ans = num1 / x;
        printf("%dと%dの最大公約数は%dです。",num1,num2,ans);
    }
    else{
        while(num1 % (num2/x) != 0){
            x++ ;
        }
        ans = num2 / x;
        printf("%dと%dの最大公約数は%dです。",num1,num2,ans);
    }
    return 0;
}