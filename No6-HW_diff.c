#include <stdio.h>

int score[10] = {};
int rank[10] = {1,2,3,4,5,6,7,8,9,10};
int main() {
    for (int i = 0; i < 10 ;i++){
        printf("%d 人目の点数を入力してください:",i+1);
        scanf("%d",&score[i]);
    }

    for (int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(score[i] > score[j]){
                int temp = score[i];
                score[i] = score[j];
                score[j] = temp;

                int temp2 = rank[i];
                rank[i] = rank[j];
                rank[j] = temp2;
            }
        }
    }
    printf("合格者：%d人目、%d人目、%d人目です。\n",rank[0],rank[1],rank[2]);

}