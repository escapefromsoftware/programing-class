#include <stdio.h>

bool flag = true;
int main(){
    int num ;

    printf("3以上の数字を入力してください。");
    scanf("%d", &num);
    //エラー処理
    if (num < 3){
        printf("エラー：3以上の数を入力してください。");
        return 0;
    }

    int n;
    printf("素数は以下の数です。\n");
    for(int i = 2; i < num; i++ ){
        for(n = 2; n < i-1; n++){
            if(i % n == 0){
                flag = false;
            }
            else{
                continue;
            }
        }
        if(flag == true){
            printf("%d ",i);
        }
        flag = true;
    }
return 0 ;
}