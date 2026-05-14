#include <stdio.h>

int main(){
    bool flag = false;
    int num, n;
    int i = 2, count = 0;

    
    printf("3以上の数字を入力してください。:");
    scanf("%d", &num);

    //エラー処理
    if (num < 3){
        printf("エラー：3以上の数を入力してください。");
        return 0;
    }
    printf("%d = ",num);

    do{
        if(flag == true){//*をつけるかつけないかフラグで判定
            printf("x ");
        }
        flag = false;
        
        while(num % i == 0){
            num = num / i;
            count++ ;
        }

        if(count != 0){
            if(count == 1){
                printf("%d ",i);
                flag = true;
                count = 0;
            }
            else{
                printf("%d^%d ", i, count);
                count = 0;
                flag = true;
            }
        }

        i++;
        for(n = 2; n < i-1; n++){//iをどうにか素数にする
            if(i % n == 0){
                i++;//iが素数になるまで+1
            }
            else{
                continue;//素数になったら通過
            }
        }
        

    }while(num != 1);
return 0;
}