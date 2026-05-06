#include <stdio.h>

int num1,num2,x=0,ans;

int main(){
    printf("整数を入力してください。");
    scanf("%d",&num1);

    if (num1 < 0)
    {
        printf("%dは正の数ではありません。",num1);
        return 0;
    }
    
    printf("整数を入力してください。");
    scanf("%d",&num2);

    if(num2 < 0){
        printf("%dは正の数ではありません。",num2);
        return 0;
    }

    if(num1 < num2){
        do
        {
            x++;
        }
        while((num2 * x) % num1 != 0);
        ans = num2 * x;
        printf("%dと%dの最小公倍数は%dです。",num1,num2,ans);
    }
    else{
        if(num2 < num1){
            do{
                x++;
            }
            while((num1 * x) % num2 != 0);
            ans = num1 * x;
            printf("%dと%dの最小公倍数は%dです。",num1,num2,ans);
        }
    }
    return 0;
}